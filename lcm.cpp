#include <iostream>

using namespace std;

int lcm(int a, int b){
	
}


int main(){
	int n;
	cin >> n;
	int temp;
	vector<int> nums;
	for(int i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
	
	if(n == 2){
		cout << lcm(nums[0], nums[1]);
		return 0;
	}
	cout << lcm(nums[0], nums[1], nums[2]);
	
}