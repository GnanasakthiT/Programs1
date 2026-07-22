// Problem: C - Not All Covered
// Contest: AtCoder - AtCoder Beginner Contest 408
// URL: https://atcoder.jp/contests/abc408/tasks/abc408_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
	int len, mod;
	cin >> len >> mod;
	
	vector<int> field(len + 2, 0);
	
	int start, stop;
	
	while(mod--){
		cin >> start >> stop;
		
		field[start] += 1;
		field[stop + 1] -= 1;
	}
	
	int minVal = INT_MAX;
	for(int ind = 1; ind <= len; ind++){
		field[ind] += field[ind-1];
		minVal = min(minVal, field[ind]);
	}
	
	cout << minVal;
}