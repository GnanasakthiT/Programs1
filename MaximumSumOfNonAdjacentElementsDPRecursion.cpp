#include <bits/stdc++.h>

using namespace std;

int maxSum(int index, vector<int>& nums, vector<int>& dp){
	if(index == 0){
		return nums[index];
	}
	if(index < 0){
		return 0;
	}
	if(dp[index] != -1){
		return dp[index];
	}
	
	int pick = nums[index] + maxSum(index - 2, nums, dp);
	int notPick = maxSum(index - 1, nums, dp);
	
	dp[index] = max(pick, notPick);
	
	return dp[index];
}

int main(){
	int len;
	cin >> len;
	vector<int> nums(len, 0);
	vector<int> dp(len, -1);
	
	for(int ind = 0; ind < len; ind++){
		cin >> nums[ind];
	}
	
	cout << maxSum(len - 1, nums, dp);
}