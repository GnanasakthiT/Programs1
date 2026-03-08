class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col){
        grid[row][col] = '0';
        vector<int> rVals = {0,1,0,-1}, cVals = {1,0,-1,0};

        for(int k = 0; k < 4; k++){
            int newR = row + rVals[k], newC = col + cVals[k];
            if(newR>-1 && newC>-1 && newR<grid.size() && newC<grid[0].size()){
                if(grid[newR][newC] == '1'){
                    dfs(grid, newR, newC);
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size(), cols = grid[0].size(), count = 0;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};