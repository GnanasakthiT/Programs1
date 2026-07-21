// Problem: D - Count Subgrid Sum = K
// Contest: AtCoder - AtCoder Beginner Contest 461
// URL: https://atcoder.jp/contests/abc461/tasks/abc461_d
// Memory Limit: 1024 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int R, C, k;
	cin >> R >> C >> k;
	
	string temp;
	vector<vector<int>> grid(R + 1, vector<int>(C + 1, 0));
	
	for(int row = 1; row <= R; row++){
		cin >> temp;
		for(int col = 1; col <= C; col++){
			grid[row][col] = temp[col] - '0';			
		}
	}
// 
	// for(int row = 1; row <= R; row++){
		// for(int col = 1; col <= C; col++){
			// grid[row][col] = grid[row][col-1] + grid[row][col];
		// }
	// }
// 	
	// for(int col = 1; col <= C; col++){
		// for(int row = 1; row <= R; row++){
			// grid[row][col] = grid[row-1][col] + grid[row][col];
		// }
	// }
	
	for(int row = 1; row <= R; row++){
		for(int col = 1; col <= C; col++){
			grid[row][col] += grid[row - 1][col] + grid[row][col - 1] - grid[row - 1][col - 1];
		}
	}
	
	int count = 0, sum = 0;
	
	for(int row = 1; row <= R; row++){
		for(int col = 1; col <= C; col++){
			for(int tr = row; tr <= R; tr++){
				for(int tc = col; tc <= C; tc++){
					sum = grid[tr][tc] - grid[row - 1][tc] - grid[tr][col - 1] + grid[row - 1][col - 1];
					if(sum == k){
						count++;
					}
				}
			}
		}
	}
	
	cout << count;
}