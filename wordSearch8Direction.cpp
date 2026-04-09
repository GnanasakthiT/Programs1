#include <iostream>
#include <vector>
#include <string>


using namespace std;

vector<int> rmod = {1,-1,0,0,1,-1,1,-1};
vector<int> cmod = {0,0,1,-1,1,-1,-1,1};

bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, string word, int row, int col, int R, int C, int index){
	if(index == (int)word.size())
		return true;
	visited[row][col] = true;
	for(int i = 0; i < 8; i++){
		int newRow = row + rmod[i];
		int newCol = col + cmod[i];
		
		if(newRow > -1 && newCol > -1 && newRow < R && newCol < C && !visited[newRow][newCol]){
			if(grid[newRow][newCol] == word[index]){
				if(dfs(grid, visited, word, newRow, newCol, R, C, index + 1))
					return true;
			}
		}
	}
	visited[row][col] = false;
	return false;
}

int main(){
	int R, C;
	cin >> R >> C;
	
	vector<vector<char>> grid(R, vector<char>(C, ' '));
	vector<vector<bool>> visited(R, vector<bool>(C, false));
	
	string word;
	cin >> word;
	
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			cin >> grid[i][j];
		}
	}
	
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			if(grid[i][j] == word[0]){
				if(dfs(grid, visited, word, i, j, R, C, 1)){
					cout << "Yes";
					return 0;
				}
			}
		}
	}
	
	cout << "No";
	return 0;
}