#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, required;
	cin >> n >> required;
	
	vector<int> nums(n);
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	
	int left = 0, right = 0, count = 0, sum = 0;

	while(right < n){
		if(sum == required){
			count++;
		}
		if(sum <= required){
			sum += nums[right];
			right++;
		}
		if(sum > required){
			sum -= nums[left];
			left++;
		}
	}
			
	cout << count;
}