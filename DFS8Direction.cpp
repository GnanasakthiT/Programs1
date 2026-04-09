#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &grid, int x, int y, int R, int C){
	grid[x][y] = 0;
	vector<int> rmod = {-1,-1,0,1,1,1,0,-1};
	vector<int> cmod = {0,1,1,1,0,-1,-1,-1};
	
	for(int k = 0; k < 8; k++){
		int newr = x + rmod[k];
		int newc = y + cmod[k];
	
		if(newr<0 || newc<0 || newr>R-1 || newc>C-1){
			continue;
		}
		if(grid[newr][newc]){
			dfs(grid, newr, newc, R, C);
		}
	}
}

int main(){
	int ROW, COL;
	cin >> ROW >> COL;
	vector<vector<int>> grid(ROW, vector<int>(COL, 0));
	
	for(int r = 0; r < ROW; r++){
		for(int c = 0; c < COL; c++){
			cin >> grid[r][c];
		}
	}
	int count = 0;
	for(int r = 0; r < ROW; r++){
		for(int c = 0; c < COL; c++){
			if(grid[r][c]){
				count++;
				dfs(grid, r, c, ROW, COL);
			}
		}
	}
	
	cout << count;
	
	
}