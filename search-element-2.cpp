// Problem: Search Element 2
// Contest: HackerRank - temp90
// URL: https://www.hackerrank.com/contests/sjit27126/challenges/search-element-2
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
	int toFind;
	cin >> toFind;
	
	for(int i = 0; i < n; i++){
		if(nums[i] == toFind){
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}