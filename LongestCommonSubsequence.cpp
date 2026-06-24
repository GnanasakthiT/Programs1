#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	
	int R = s1.size(), C = s2.size();
	
	vector<vector<int>> grid(R + 1, vector<int>(C + 1, 0));
	
	for(int row = 1; row < R + 1; row++){
		for(int col = 1; col < C + 1; col++){
			if(s1[row-1] == s2[col-1]){
				grid[row][col] = grid[row-1][col-1] + 1;
			}
			else{
				grid[row][col] = max(grid[row-1][col], grid[row][col-1]);
			}
		}
	}
	
	for(int row = 0; row <= R; row++){
		for(int col = 0; col <= C; col++){
			cout << grid[row][col];
		}
		cout << endl;
	}
	
	cout << grid[R][C] << endl;
}