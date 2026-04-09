#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, temp;
	cin >> n;
	
	vector<int> nums;
	for(int i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
	
	vector<int> final;
	for(int i = 0; i < n-1; i++){
		if(nums[i] != nums[i+1]){
			final.push_back(nums[i]);
		}
	}
	final.push_back(nums[nums.size()-1]);
	
	for(int x : final)
		cout << x << ' ';
}