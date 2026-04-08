class Solution {
public:
    void bfs(vector<vector<char>>& grid, int row, int col){
        queue<pair<int,int>> myQueue;
        myQueue.push({row, col});
        grid[row][col] = '0';
        vector<int> rc = {0,1,0,-1}, cc = {1,0,-1,0};

        while(!myQueue.empty()){
            cout << myQueue.size() << endl;
            auto [x,y] = myQueue.front();
            myQueue.pop();

            for(int k = 0; k < 4; k++){
                int a = x  + rc[k];
                int b = y + cc[k];

                if(a >= 0 && b >= 0 && a < grid.size() && b < grid[0].size() && grid[a][b] == '1'){
                    grid[a][b] = '0';
                    myQueue.push({a,b});
                }
            }
        }
    
    }

    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size(), cols = grid[0].size(), count = 0;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == '1'){
                    bfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};