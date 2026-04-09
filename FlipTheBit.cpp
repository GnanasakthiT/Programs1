#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int len, toChange, special;
	
	cin >> len >> toChange;
	
	vector<int> nums(len+2, 0);
	
	for(int ind = 1; ind <= len; ind++){
		cin >> nums[ind];
	}
	
	cin >> special;
	
	nums[0] = nums[special];
	nums[len+1] = nums[special];
	
	vector<int> dp(len+2, 0);
	
	for(int ind = 1; ind < special; ind++){
		if(nums[ind] != nums[ind-1]){
			dp[ind] = dp[ind-1] + 1;
		}
		else{
			dp[ind] = dp[ind-1];
		}
	}
	
	for(int ind = len; ind > special; ind--){
		if(nums[ind] != nums[ind+1]){
			dp[ind] = dp[ind+1] + 1;
		}
		else{
			dp[ind] = dp[ind+1];
		}
	}
	
	dp[special] = max(dp[special - 1], dp[special + 1]);
	
	int maxInd;
	
	if(dp[special - 1] > dp[special + 1]){
		maxInd = special - 1;
	}
	else{
		maxInd = special + 1;
	}
	
	if(nums[maxInd] == nums[special]){
		cout << dp[special] << endl;
	}
	else{
		cout << dp[special] + 1 << endl;
	}
}

int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
		solve ();
	}	
}