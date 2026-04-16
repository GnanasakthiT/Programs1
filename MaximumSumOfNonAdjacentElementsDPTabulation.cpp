#include <bits/stdc++.h>

using namespace std;

int main(){
	int len;
	cin >> len;
	
	vector<int> nums(len, 0), dp(len, 0);
	
	for(int ind = 0; ind < len; ind++){
		cin >> nums[ind];
	}
	
	dp[0] = nums[0];
	
	for(int ind = 1; ind < len; ind++){
		int pick = nums[ind];
		if(ind > 1){
			pick += dp[ind - 2];
		}
		int notPick = dp[ind - 1];
		dp[ind] = max(pick, notPick);
	}
	
	cout << dp[len - 1];
}