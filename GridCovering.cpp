#include <bits/stdc++.h>

using namespace std;

void solve(){
	int R, C, right, bottom;
	cin >> R >> C;
	cin >> right >> bottom;
	
	if(gcd(R, right) == 1 && gcd(C, bottom) == 1 && gcd(R, C) <= 2){
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