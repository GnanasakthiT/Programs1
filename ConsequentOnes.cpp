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
	int currCount = 0, maxCount = 0;
	for(int x : nums){
		if(x == 1){
			currCount++;
		}
		else{
			currCount = 0;
		}
		maxCount = max(currCount, maxCount);
	}
	
	cout << maxCount;
}