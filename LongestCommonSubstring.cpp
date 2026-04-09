#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	
	cin >> s1 >> s2;
	
	int R = s1.size(), C = s2.size();
	
	vector<vector<int>> dp(R + 1, vector<int>(C + 1, 0));
	
	int maxLen = 0;
	
	for(int row = 1; row < R + 1; row++){
		for(int col = 1; col < C + 1; col++){
			if(s1[row-1] == s2[col-1]){
				dp[row][col] = dp[row-1][col-1] + 1;
				maxLen = max(maxLen, dp[row][col]);
			}
		}
	}
	
	for(int row = 1; row < R + 1; row++){
		for(int col = 1; col < C + 1; col++){
			if(dp[row][col] == maxLen){
				cout << s1.substr(row - maxLen, maxLen) << endl;
			}
		}
	}
}