#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	
	vector<int> ans;
	
	for(int x : nums){
		auto iter = (ans.begin(), ans.end(), x);
		
		if(iter == ans.end()){
			ans.push_back(x);
		}
		else{
			*iter = x;
		}
	}
	
	cout << ans.size();
}