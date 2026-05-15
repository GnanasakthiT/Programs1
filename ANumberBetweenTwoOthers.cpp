#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long int x, y;
	cin >> x >> y;
	
	if(x + x < y){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}

int main(){
	int testcases;
	cin >> testcases;
	
	while(testcases--){
		solve();
	}
}