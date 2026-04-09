#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	int temp;
	vector<int> nums;
	
	for(int i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
	
	for(int i = 0; i < n; i++){
		nums[i] = nums[i] * nums[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(nums[i] > nums[j]){
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	
	for(int x : nums){
		cout << x << ' ';
	}
}