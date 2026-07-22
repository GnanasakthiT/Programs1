// Problem: D - Many Repunit Sum
// Contest: AtCoder - AtCoder Beginner Contest 444
// URL: https://atcoder.jp/contests/abc444/tasks/abc444_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int len; 
	cin >> len;
	vector<int> result;
	vector<int> arr(len, 0);
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	
	sort(arr.begin(), arr.end());
	
	long long int carry = 0L;
	
	for(int ctr = 1; ctr <= arr[len - 1]; ctr++){
		auto it = lower_bound(arr.begin(), arr.end(), ctr);
		int cnt = arr.end() - it;
		carry += cnt;
		result.push_back(carry%10);
		carry /= 10;
	}
	if(carry){
		result.push_back(carry);
	}
	
	for(int ind = result.size() - 1; ind >= 0; ind--){
		cout << result[ind];
	}	
}