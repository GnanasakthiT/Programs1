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
	
	int maxSum = 0, currSum = 0;
	
	for(int ind = 0; ind < k; ind++){
		maxSum += arr[ind];
	}
	
	currSum = maxSum;
	for(int ind = k - 1; ind >= 0; ind--){
		currSum -= arr[ind];
		currSum += arr[len - (k - ind)];
		maxSum = max(maxSum, currSum);
	}
	
	cout << maxSum << endl;
}