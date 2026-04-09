#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <limits.h>

using namespace std;

int minPath = INT_MAX;

void bfs(vector<vector<char>> &matrix, int r, int c, int R, int C){
	queue<tuple<int, int, int>> myQueue;
	myQueue.push(make_tuple(r, c, 1));
	
	vector<int> rowMod = {-1,-1,0,1,1,1,0,-1};
	vector<int> colMod = {0,1,1,1,0,-1,-1,-1};

	while(!myQueue.empty()){
		auto val = myQueue.front();
		int row = get<0>(val), col = get<1>(val), path = get<2>(val);
		matrix[row][col] = 'X';
		myQueue.pop();
		
		for(int mod = 0; mod < 8; mod++){
			int newRow = rowMod[mod] + row, newCol = colMod[mod] + col;
			
			if(newRow >= 0 && newCol >= 0 && newRow < R && newCol < C){
				if(matrix[newRow][newCol] == 'c'){
					minPath = min(minPath, path);
				}
				if(matrix[newRow][newCol] == '.'){
					myQueue.push(make_tuple(newRow, newCol, path + 1));
				}
			}
		}
	}
	
}

int main(){
	int ROW, COL;
	cin >> ROW >> COL;
	
	vector<vector<char>> grid(ROW, vector<char>(COL, 'b'));
	
	for(int r = 0; r < ROW; r++){
		for(int c = 0; c < COL; c++){
			cin >> grid[r][c];
		}
	}
	
	for(int r = 0; r < ROW; r++){
		for(int c = 0; c < COL; c++){
			if(grid[r][c] == 'r'){
				bfs(grid, r, c, ROW, COL);
			}
		}
	}

	cout << minPath << endl;
	
}