#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> nums;

void getInput(){
	int temp, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
}

int main(){
	getInput();
//	int currCount = 0, maxCount = 0;
	vector<int> dp;
	dp.push_back(nums[0]);
	dp.push_back(nums[1]);
	
	for(int j = 2; j < nums.size(); j++){
		dp.push_back(max(dp[j-1], dp[j-2]) + nums[j]);
	}
	cout << dp[nums.size()-1];
}