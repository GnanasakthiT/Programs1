// Problem: B - Parking 2
// Contest: AtCoder - AtCoder Beginner Contest 465
// URL: https://atcoder.jp/contests/abc465/tasks/abc465_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> time(24, 0);
	int x, y, l, r, a, b;
	cin >> x >> y >> l >> r >> a >> b;
	
	for(int ind = a; ind < b; ind++){
		time[ind]++;
	}
	
	for(int ind = l; ind < r; ind++){
		time[ind] += 2;
	}
	
	int cost = 0;
	
	for(int ind = 1; ind < 24; ind++){
		if(time[ind] == 3){
			cost += x;
		}
		else if(time[ind] == 1){
			cost += y;
		}
	}
	cout << cost;
}