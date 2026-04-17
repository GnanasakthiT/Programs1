#include <bits/stdc++.h>

using namespace std;

int paths(int row, int col, vector<vector<int>>& dp){
	if(row == 0 && col == 0){
		return 1;
	}
	if(row < 0 || col < 0){
		return 0;
	}
	
	if(dp[row][col] != -1){
		return dp[row][col];
	}
	
	int up = paths(row-1,col, dp);
	int left = paths(row,col-1, dp);
	
	return dp[row][col] = up + left;
}

int main(){
	int R, C;
	cin >> R >> C;
	vector<vector<int>> dp(R, vector<int>(C, -1));
	
	cout << paths(R-1, C-1, dp);
}