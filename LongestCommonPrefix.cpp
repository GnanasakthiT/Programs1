#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> strs(3);
    for(int ind = 0; ind < 3; ind++){
    	cin >> strs[ind];
    }
    
    int s1 = strs[0].size(), s2 = strs[1].size(), s3 = strs[2].size();
	vector<vector<int>> dp1(s1 + 1, vector<int>(s2 + 1, 0));
	vector<vector<int>> dp2(s2 + 1, vector<int>(s3 + 1, 0));
	
	if((strs[0][0] != strs[1][0]) || (strs[1][0] != strs[2][0]) || (strs[0][0] != strs[2][0])){
		cout << "nothing common" << endl;
		return 0;
	}
	
	int maxLen1 = 0, maxLen2 = 0;
	
	for(int row = 1; row < s1 + 1; row++){
		for(int col = 1; col < s2 + 1; col++){
			if(strs[0][row-1] == strs[1][col-1]){
				dp1[row][col] = dp1[row-1][col-1] + 1;
			}
			maxLen1 = max(maxLen1, dp1[row][col]);
		}
	}
/*	
	for(int row = 0; row < s1 + 1; row++){
		for(int col = 0; col < s2 + 1; col++){
			cout << dp1[row][col] << ' ';
		}
		cout << endl;
	}
	
	cout << endl;
*/
	for(int row = 1; row < s2 + 1; row++){
		for(int col = 1; col < s3 + 1; col++){
			if(strs[1][row-1] == strs[2][col-1]){
				dp2[row][col] = dp2[row-1][col-1] + 1;
			}
			maxLen2 = max(maxLen2, dp2[row][col]);
		}
	}

/*
	for(int row = 0; row < s2 + 1; row++){
		for(int col = 0; col < s3 + 1; col++){
			cout << dp2[row][col] << ' ';
		}
		cout << endl;
	}
	
	cout << endl;
*/
	cout << strs[0].substr(0, min(maxLen1, maxLen2));
}