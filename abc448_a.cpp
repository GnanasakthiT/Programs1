#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> nums(n);
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	
	for(int val : nums){
		if(val < x){
			cout << 1 << endl;
			x = val;
		}
		else{
			cout << 0 << endl;
		}
	}
	
}