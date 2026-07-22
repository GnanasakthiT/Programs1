// Problem: E - Roads and Gates
// Contest: AtCoder - AtCoder Beginner Contest 463
// URL: https://atcoder.jp/contests/abc463/tasks/abc463_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <map>
#include <limits.h>
#include <vector>
#include <queue>
#include <algorithm>
#define ll long long int

using namespace std;

int main(){
	int city, roads, consty;
	cin >> city >> roads >> consty;
	
	map<ll, vector<pair<ll,ll>> > mp;
	priority_queue< pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
	
	int c1, c2, time;
	for(int ind = 1; ind <= roads; ind++){
		cin >> c1 >> c2 >> time;
		
		mp[c1].push_back({c2, time});
		mp[c2].push_back({c1, time});
	}
	
	mp[city + 1].push_back({city+2, consty});
	
	for(int ind = 1; ind <= city; ind++){
		cin >> time;
		mp[ind].push_back({city+1, time});
		mp[city+2].push_back({ind, time});
	}
	
	q.push({0, 1});
	
	vector<ll> arr(city+3, LLONG_MAX);
	
	arr[1] = 0;
	
	ll currcity, currtime, newtime, newcity;
	
	while(!q.empty()){
		auto curr = q.top();
		q.pop();
		currtime = curr.first;
		currcity = curr.second;
		
		if(arr[currcity] < currtime){
			continue;
		}
		
		for(auto it : mp[currcity]){
			newtime = currtime + it.second;
			newcity = it.first;
			
			if(arr[newcity] > newtime){
				q.push({newtime, newcity});
				arr[newcity] = newtime;
			}
		}	
	}
	
	for(int ind = 2; ind <= city; ind++){
		cout << arr[ind] << ' ';
	}
}