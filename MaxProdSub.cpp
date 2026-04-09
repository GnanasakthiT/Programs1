#include <iostream>
#include <vector>

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
	int size = nums.size();
	int currProd = nums[0], maxProd = nums[0];
	for(int i = 1; i < size; i++){
		currProd = max(currProd, currProd*nums[i]);
		maxProd = max(maxProd, currProd);
	}
	cout << maxProd;
}