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
	
	for(int x : nums){
		cout << x << ' ';
	}
}