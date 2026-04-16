#include <bits/stdc++.h>

using namespace std;

int maxSum(int index, vector<int> &arr){
	if(index == 0){
		return arr[index];
	}
	if(index < 0){
		return 0;
	}
	
	int pick = arr[index] + maxSum(index-2, arr);
	int notPick = maxSum(index-1, arr);
	
	return max(pick, notPick);
}

int main(){
	int len;
	cin >> len;
	vector<int> nums(len, 0);
	for(int ind = 0; ind < len; ind++){
		cin >> nums[ind];
	}
	
	cout << maxSum(len - 1, nums);
}

/*

Gives TLE for large inputs like this
48
114 117 207 117 235 82 90 67 143 146 53 108 200 91 80 223 58 170 110 236 81 90 222 160 165 195 187 199 114 235 197 187 69 129 64 214 228 78 188 67 205 94 205 169 241 202 144 240
Expected: 4173
*/