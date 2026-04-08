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
	
	int currMin = nums[0], currMax = nums[0], maxProd = nums[0];
	
	for(int i = 1; i <(int) nums.size(); i++){
		int x = nums[i];
		if(x < 0)
			swap(currMax, currMin);
		
		currMax = max(x, currMax*x);
		currMin = min(x, currMin*x);
		
		maxProd = max(maxProd, currMax);
	}
	cout << maxProd;
}