#include <iostream>
#include <vector>
using namespace std;

// Directions: up, down, left, right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

vector<int> nums;

bool dfs(vector<vector<int>>& grid, int x, int y, vector<vector<bool>>& visited) {
    int n = grid.size();
    int m = grid[0].size();

    // If out of bounds or blocked or already visited
    if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] == 0 || visited[x][y])
        return false;

    // If we reached person B (value 3)
    if (grid[x][y] == 3) return true;

    // Mark current cell as visited
    visited[x][y] = true;

    // Explore all 4 directions
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (dfs(grid, nx, ny, visited)) return true;
    }

    return false;
}

int main() {
    vector<vector<int>> grid = {
        {2, 1, 1, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 3, 0}
    };


    int n = grid.size(), m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Find starting point (person A = 2)
    int startX = -1, startY = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                startX = i;
                startY = j;
                break;
            }
        }
    }

    if (dfs(grid, startX, startY, visited))
        cout << "Path exists between the two persons!" << endl;
    else
        cout << "No path exists." << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Directions: up, down, left, right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool dfs(int grid[4][5], bool visited[4][5], int x, int y, int n, int m) {
    // If out of bounds or blocked or already visited
    if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] == 0 || visited[x][y])
        return false;

    // If we reached person B (value 3)
    if (grid[x][y] == 3) return true;

    // Mark current cell as visited
    visited[x][y] = true;

    // Explore all 4 directions
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (dfs(grid, visited, nx, ny, n, m)) return true;
    }

    return false;
}

int main() {
    // Fixed grid
    int grid[4][5] = {
        {2, 1, 1, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 3, 0}
    };

    int n = 4, m = 5;

    // C-style visited array initialized to false
    bool visited[4][5] = {false};

    // Find starting point (person A = 2)
    int startX = -1, startY = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                startX = i;
                startY = j;
                break;
            }
        }
    }

    if (dfs(grid, visited, startX, startY, n, m))
        cout << "Path exists between the two persons!" << endl;
    else
        cout << "No path exists." << endl;

    return 0;
}
