#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	
	sort(nums.begin(), nums.end());
	
	int currTime = 0, avgTime = 0;
	
	for(int val : nums){
		avgTime += currTime;
		currTime += val;
	}
	
	cout << avgTime/nums.size() << endl;
}