// Problem: Print Array 6 1
// Contest: HackerRank - temp90
// URL: https://www.hackerrank.com/contests/sjit27126/challenges/print-array-6-1
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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