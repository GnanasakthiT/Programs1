// Problem: A. Divide and Conquer
// Contest: Codeforces - Codeforces Round 1107 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2241/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <string>

using namespace std;

void solve(){
	int a, b;
	cin >> a >> b;
	
	a %= 2;
	b %= 2;
	if(a != b || (a == 1 && b == 1)){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
}

int main(){
	int tc;
	cin >> tc;
	
	while(tc--){
		solve();
	}
}