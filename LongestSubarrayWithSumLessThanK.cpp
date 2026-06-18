#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int len, k;
	cin >> len >> k;
	vector<int> arr(len, 0);
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	
	int left = 0, right = 0, maxLen = 0, sum = 0;
	
	while(right < len){
		sum += arr[right];
		while(sum > k){
			sum -= arr[left];
			left++;
		}
		if(sum <= k){
			maxLen = max(maxLen, right - left + 1);
		}
		right++;
	}
	
	cout << maxLen << endl;
}