#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> indChange = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};

bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, string word, int r, int c, int ROW, int COL, int index){
	if(index == (int)word.size()){
		return true;
	}
	
	visited[r][c] = true;
	
	for(int i = 0; i < 8; i++){
		int newRow = r + indChange[i][0], newCol = c + indChange[i][1];
		
		if(newRow >= 0 && newCol >= 0 && newRow < ROW && newCol < COL && !visited[newRow][newCol]){
			if(grid[newRow][newCol] == word[index]){
				if(dfs(grid, visited, word, newRow, newCol, ROW, COL, index+1)){
					return true;
				}
			}
		}
	}
	
	visited[r][c] = false;
	return false;
}

int main(){
	int ROW, COL;
	string word;
	cin >> ROW >> COL;
	vector<vector<char>> grid(ROW, vector<char>(COL));
	vector<vector<bool>> visited(ROW, vector<bool>(COL, false));
	cin >> word;
	
	for(int r = 0; r < ROW; r++){
		for(int c = 0; c < COL; c++){
			cin >> grid[r][c];
		}
	}
	
	bool result = false;
	for(int r = 0; r < ROW; r++){
		for(int c = 0;  c < COL; c++){
			if(grid[r][c] == word[0]){
				result = dfs(grid, visited, word, r, c, ROW, COL, 1);
			}
		}
		if(result){
			break;
		}
	}
	
	cout << result;
}