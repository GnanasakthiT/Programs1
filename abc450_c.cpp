#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<vector<char>>& grid, int r, int c, int ROW, int COL){
	grid[r][c] = 'X';
	
	vector<int> mod = {0,1,0,-1,0};
	
	for(int i = 0; i < 4; i++){
		int newRow = r + mod[i];
		int newCol = c + mod[i+1];
		
		if(newRow > 0 && newCol > 0 && newRow < ROW - 1&& newCol < COL - 1 && grid[newRow][newCol] == '.'){
			dfs(grid, newRow, newCol, ROW, COL);
		}
	}
}

int main(){
	int ROW, COL;
	cin >> ROW >> COL;
	
	vector<vector<char>> matrix(ROW, vector<char>(COL));
	
	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL; j++){
			cin >> matrix[i][j];
		}
	}
	
	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL; j++){
			if((i == 0 || j == 0 || i == ROW - 1 || j == COL - 1) && (matrix[i][j] == '.')){
				dfs(matrix, i, j, ROW, COL);
			}
		}
	}
	
	int count = 0;
	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL ; j++){
			if(matrix[i][j] == '.'){
				dfs(matrix, i, j, ROW, COL);
				count++;
			}
		}
	}
	cout << count;
}