#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
	vector<int> nums(7);
	
	for(int i = 0; i < 7; i++){
		cin >> nums[i];
	}
	
	sort(nums.begin(), nums.end());
	
	int sum = 0;
	
	for(int i = 0; i < 6; i++){
		sum -= nums[i];
	}
	
	sum += nums[6];
	
	cout << sum << endl;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		solve();
	}
}