#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> modify{{0,1},{0,-1},{1,1},{1,-1},{1,0},{-1,0},{-1,1},{-1,-1}};

bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, string word, int index, int r, int c, int R, int C, int miss){
	if(index == (int)word.size()){
		return true;
	}
	
	visited[r][c] = true;
	
	for(int m = 0; m < 8; m++){
		int newRow = r + modify[m][0], newCol = c + modify[m][1];
		
		if(newRow > -1 && newCol > -1 && newRow < R && newCol < C && !visited[newRow][newCol]){
			if(dfs(grid, visited, word, index + 1,  newRow, newCol, R, C, miss)){
				return true;
			}
			if(dfs(grid, visited, word, index+2, newRow, newCol, R, C, miss)){
				return true;
				
			}
			
			
		}
		
	}
	if(miss == 0){
		if(dfs(grid, visited, word, index + 1, r, c, R, C, miss)){
			return true;
		}
	}
	
	visited[r][c] = false;
	return false;
}
	

int main(){
	int R, C, missed = 0;
	cin >> R >> C;
	
	string word;
	vector<vector<char>> grid(R, vector<char>(C));
	vector<vector<bool>> visited(R, vector<bool>(C, false));
	
	for(int r = 0; r < R; r++){
		for(int c = 0; c < C; c++){
			cin >> grid[r][c];
		}
	}	
	
	cin >> word;
	
	for(int ind = 0; ind < 2; ind++){
		for(int r = 0; r < R; r++){
			for(int c = 0; c < C; c++){
				missed = 0;
				if(word[ind] == grid[r][c]){
					if(dfs(grid, visited, word, ind, r, c, R, C, ind)){
						cout << "Yes";
						return 0;
					}
				}
			}
		}
	}
	
	cout << "No" << endl;
}