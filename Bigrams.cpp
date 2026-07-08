// Problem: Bigrams
// Contest: Codeforces
// URL: https://m2.codeforces.com/contest/2242/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>

using namespace std;

void solve(){
	int len;
	cin >> len;
	
	int each, twoCount = 0;
	bool flag = false;
	
	while(len--){
		cin >> each;
		if(each > 2){
			flag = true;
		}
		if(each >=  2){
			twoCount++;
		}
	}
	
	if(twoCount >= 2){
		flag = true;
	}
	
	if(flag){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}

int main(){
	int tc;
	cin >> tc;
	
	while(tc--){
		solve();
	}
}