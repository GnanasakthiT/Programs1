#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> dp;
	dp.push_back(0);
	dp.push_back(1);
	
	for(int i = 2; i <= n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	cout << dp[n];
}