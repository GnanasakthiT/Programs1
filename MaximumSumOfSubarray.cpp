#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int len, k;
	cin >> len;
	vector<int> arr(len, 0);
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	
	cin >> k;
	
	int windowSum = 0;
	
	for(int ind = 0; ind < k; ind++){
		windowSum += arr[ind];
	}
	
	int maxSum = windowSum;
	
	for(int ind = k; ind < len; ind++){
		windowSum = windowSum + arr[ind] - arr[ind - k];
		maxSum = max(maxSum, windowSum);
	}
	
	cout << maxSum << endl;
}