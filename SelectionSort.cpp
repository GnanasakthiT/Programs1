#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	int temp;
	int flag = 0;
	vector<int> nums;
	
	for(int i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
	
	int min, ind;
	for(int i = 0; i < n; i++){
		min = nums[i];flag = 0;
		for(int j = i+1; j < n; j++){
			if(nums[j] < min){
				min = nums[j];
				ind = j;
				flag = 1;
			}
		}
		if(flag){		
			temp = nums[i];
			nums[i] = min;
			nums[ind] = temp;
		}
	}
	for(int x : nums)
		cout << x << ' ';	
}