// Problem: A. Line Trip
// Contest: Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1901/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int n, x;
	cin >> n >> x;
	vector<int> fuel(n, 0);
	for(int ind = 0; ind < n; ind++){
		cin >> fuel[ind];
	}
	
	int maxGap = 0, prev = 0;
	
	for(int ind = 0; ind < n ; ind++){
		maxGap = max(maxGap, fuel[ind] - prev);
		prev = fuel[ind];
	}
	
	maxGap = max(maxGap, (x - fuel[n-1])*2);
	cout << maxGap << endl;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}