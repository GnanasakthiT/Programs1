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
	
	for(int row = 1; row < R; row++){
		for(int col = 1; col < C; col++){
			if(s1[row-1] == s2[col-1]){
				if()				
			}
		}
	}	
}