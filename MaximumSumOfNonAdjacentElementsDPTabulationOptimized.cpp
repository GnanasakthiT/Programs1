#include <bits/stdc++.h>

using namespace std;

int main(){
	int len;
	cin >> len;
	vector<int> nums(len, 0);
	
	for(int ind = 0; ind < len; ind++){
		cin >> nums[ind];
	}
	
	int prev1 = nums[0], prev2 = 0;
	
	for(int ind = 1; ind < len; ind++){
		int curr = max(prev1, prev2 + nums[ind]);
		prev2 = prev1;
		prev1 = curr;
	}
	cout << prev1;
}