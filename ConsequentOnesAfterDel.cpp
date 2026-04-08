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
	for(int j = 0; j < nums.size(); j++){
		for(int i = 0; i < nums.size(); i++){
				if(j == i)
					continue;
				if(nums[i] == 1)
					currCount++;
				else 
					currCount = 0;
			
			maxCount = max(currCount, maxCount);

		}
		currCount = 0;	
	}
	cout << maxCount;
}