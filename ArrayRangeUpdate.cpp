#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int len;
	cin >> len;
	
	vector<int> arr(len + 2, 0), dp(len + 2, 0);
	
	for(int ind = 1; ind <= len; ind++){
		cin >> arr[ind];
	}
	
	int querries;
	cin >> querries;
	
	int start, end, value;
	for(int q = 0; q < querries; q++){
		cin >> start >> end >> value;
		dp[start] += value;
		dp[end+1] -= value;		
	}
	
	for(int ind = 1; ind < len + 2; ind++){
		dp[ind] += dp[ind-1];
	}
	
	for(int ind = 0; ind < len + 2; ind++){
		arr[ind] += dp[ind];
	}
	
	for(int ind = 1; ind < len + 1; ind++){
		cout << arr[ind] << ' ';
	}
	
}