#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
#include <algorithm>
#include <limits.h>

using namespace std;

int path = INT_MAX;

void bfs(vector<vector<char>> grid, int r, int c, int ROW, int COL){
	path = INT_MAX;
	queue<tuple<int, int, int>> myQueue;
	myQueue.push(make_tuple(r, c, 1));
	
	vector<int> rowMod = {-1,-1,0,1,1,1,0,-1};
	vector<int> colMod = {0,1,1,1,0,-1,-1,-1};
	
	while(!myQueue.empty()){
		auto val = myQueue.front();
		int row = get<0>(val), col = get<1>(val), currPath = get<2>(val);
		myQueue.pop();
		grid[row][col] = 'X';
		
		for(int mod = 0; mod < 8; mod++){
			int newRow = row + rowMod[mod], newCol = col + colMod[mod];
			
			if(newRow >= 0 && newCol >= 0 && newRow < ROW && newCol < COL){
				if(grid[newRow][newCol] == 'c'){
					path = min(path, currPath);
				}
				if(grid[newRow][newCol] == '.'){
					myQueue.push(make_tuple(newRow, newCol, currPath + 1));
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
	
	vector<int> rabbit(2);
	int rind = 0;
	for(int r = 0; r < ROW; r++){
		for(int c = 0; c < COL; c++){
			if(grid[r][c] == 'r'){
				bfs(grid, r, c, ROW, COL);
				rabbit[rind] = path;
				rind++;
			}
		}
	}
	if(min(rabbit[0], rabbit[1]) == INT_MAX){
		cout << -1;		
	}
	else{
		cout << min(rabbit[0], rabbit[1]);
	}
	
}