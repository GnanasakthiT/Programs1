// Problem: B - Crop
// Contest: AtCoder - Japanese Student Championship 2026 -Advance- Qualification (AtCoder Beginner Contest 464)
// URL: https://atcoder.jp/contests/abc464/tasks/abc464_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int R, C;
	cin >> R >> C;
	vector<vector<char>> grid(R, vector<char>(C));
	
	for(int row = 0; row < R; row++){
		for(int col = 0; col < C; col++){
			cin >> grid[row][col];
		}
	}
	
	int startRow = 0, endRow = 0;
	
	for(int row = 0; row < R; row++){
		for(int col = 0; col < C; col++){
			if(grid[row][col] == '#'){
				startRow = row;
				row = R;
				break;
			}
		}
	}

	for(int row = R - 1; row >= 0; row--){
		for(int col = C - 1; col >= 0; col--){
			if(grid[row][col] == '#'){
				endRow = row;
				row = -1;
				break;
			}
		}
	}

	
	int startCol = 0, endCol = 0;
	
	for(int col = 0; col < C; col++){
		for(int row = 0; row < R; row++){
			if(grid[row][col] == '#'){
				startCol = col;
				col = C;
				break;
			}
		}
	}
	
	for(int col = C - 1; col >= 0; col--){
		for(int row = R - 1; row >= 0; row--){
			if(grid[row][col] == '#'){
				endCol = col;
				col = -1;
				break;
			}
		}
	}

	for(int row = startRow; row <= endRow; row++){
		for(int col = startCol; col <= endCol; col++){
			cout << grid[row][col];
		}
		cout << endl;
	}
}