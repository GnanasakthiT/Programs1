// Problem: A - Compromise
// Contest: AtCoder - AtCoder Beginner Contest 466
// URL: https://atcoder.jp/contests/abc466/tasks/abc466_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>

using namespace std;

int main(){
	int len;
	cin >> len;
	
	vector<int> arr(len, 0);
	int neg = 0;
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
		if(arr[ind] < 0){
			neg++;
		}
	}
	
	if(neg == len){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}