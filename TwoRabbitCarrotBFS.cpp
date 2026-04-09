#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> mod = {1,0,-1,0,1};

int bfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int row, int col, int R, int C){
	queue<pair<int, int>> indices;
	indices.push({row, col});
	
	int pathLength = 0;
	
	while(!indices.empty()){
		pathLength++;
		for(int ind = 0; ind < (int) indices.size(); ind++){
			auto xy = indices.front();
			indices.pop();
			for(int m = 0; m < 4; m++){
				int newRow = xy.first + mod[m], newCol = xy.second + mod[m+1];
				
				if(newRow > -1 && newCol > -1 && newRow < R && newCol < C && !visited[newRow][newCol]){
					if(grid[newRow][newCol] == '.'){
						indices.push({newRow, newCol});
						visited[newRow][newCol] = true;
					}
					if(grid[newRow][newCol] == 'c'){
						return pathLength;
					}
				}
			}
		}
	}
	return -1;
}


int main(){
	int R, C;
	cin >> R >> C;
	
	vector<vector<char>> grid(R, vector<char>(C));
	
	for(int row = 0; row < R; row++){
		for(int col = 0; col < C; col++){
			cin >> grid[row][col];			
		}
	}
	vector<int> rabbits;
	for(int row = 0; row < R; row++){
		for(int col = 0; col < C; col++){
			if(grid[row][col] == 'r'){
				vector<vector<bool>> visited(R, vector<bool>(C));
				rabbits.push_back(bfs(grid, visited, row, col, R, C));
			}
		}
	}
	
	if(rabbits[0] < rabbits[1]){
		cout << "Rabbit 1 Wins " << rabbits[0] << endl;
	}
	else if(rabbits[0] > rabbits[1]){
		cout << "Rabbit 2 Wins " << rabbits[1] << endl;		
	}
	else if(rabbits[0] == -1 && rabbits[1] == -1){
		cout << "Both cannot reach" << endl;
	}
	else{
		cout << "Both win " << rabbits[0] << endl;
	}
	
}