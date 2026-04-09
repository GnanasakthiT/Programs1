#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isVowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
    return false;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int R = s1.size(), C = s2.size();
    vector<vector<int>> dp(R + 1, vector<int>(C + 1, 0));
    int maxLen = 0;
    for(int row = 1; row <= R; row++){
        for(int col = 1; col <= C; col++){
            if(s1[row-1] == s2[col-1]){
            	if(dp[row-1][col-1] == 0 && isVowel(s1[row-1])){
            		dp[row][col] = 1;            		
            	}
            	if(dp[row-1][col-1]){
            		dp[row][col] = dp[row-1][col-1] + 1;
            	}
            }
            
            maxLen = max(maxLen, dp[row][col]);
        }
    }
    cout << maxLen << endl;
}