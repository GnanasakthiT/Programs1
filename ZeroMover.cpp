#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	
	int nonZero = 0;
	
	for(int i = 0; i < n; i++){
		if(nums[i]){
			int temp = nums[nonZero];
			nums[nonZero] = nums[i];
			nums[i] = temp;
			nonZero++;
		}
	}
	
	
	for(int val : nums){
		cout << val << ' ';
	}
}