#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long

using namespace std;

vector<string> tpow;
vector<int> gi;

void dfs(string s){
	if(s.size() > 0){
		gi.push_back(stoi(s));
	}
	for(unsigned int i = 0; i < tpow.size(); i++){
		if(s.size() + tpow[i].size() <= 9){
			dfs(s+tpow[i]);
		}
	}
}

int main(){
	int n;
	cin >> n;
	for(ll val = 1;; val = val * 2){
		string s = to_string(val);		
		if(s.size()>9)break;
		tpow.push_back(s);
	}
	
	dfs("");
	sort(gi.begin(), gi.end());
	gi.erase(unique(gi.begin(), gi.end()), gi.end());
	
	cout << gi.at(n-1);
}