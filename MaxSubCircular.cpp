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
	int n = nums.size();
	int totalSum = nums[0], currMaxSum = nums[0], currMinSum = nums[0], maxSum = nums[0], minSum = nums[0];
	for(int i = 1; i < n; i++){
		totalSum += nums[i];
		
		currMaxSum = max(currMaxSum + nums[i], nums[i]);
		maxSum = max(currMaxSum, maxSum);
		
		currMinSum = min(currMinSum + nums[i], nums[i]);
		minSum = min(currMinSum, minSum);
	}
	
	if(maxSum<0){
		cout << maxSum;
	}
	else
		cout << max(maxSum, totalSum - minSum);
}