#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, temp;
	cin >> n;
	vector<int> nums;
	
	cin >> temp;
	nums.push_back(temp);

	for(int i = 1; i < n; i++){
		cin >> temp;
		nums.push_back(temp + nums[i-1]);
	}
	
	for(int x : nums)
		cout << x << ' ';
}