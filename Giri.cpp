#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	int temp;
	vector<int> nums;

	for(int i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
	nums.pop_back();
	for(int i = 0; i < nums.size(); i++){
		cout << nums[i] << ' ';
	}
	cout << endl;
	
	for(int x : nums)
		cout << x << ' ';
	
}