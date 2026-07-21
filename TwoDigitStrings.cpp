// Problem: D. Two Digit Strings
// Contest: Codeforces - Educational Codeforces Round 192 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/2242/D
// Memory Limit: 512 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
	string a, b;
	cin >> a >> b;
	
	int ROW = a.size(), COL = b.size();
	vector<int> amod(ROW, 0), bmod(COL, 0);
	amod[0] = a[0] - '0';
	bmod[0] = b[0] - '0';
	
	for(int ind = 1; ind < ROW; ind++){
		amod[ind] = ((amod[ind - 1]) + (a[ind] - '0'))%10;
	}

	for(int ind = 1; ind < COL; ind++){
		bmod[ind] = ((bmod[ind - 1]) + (b[ind] - '0'))%10;
	}
	
	if(amod[ROW-1] != bmod[COL-1]){
		cout << -1 << endl;
		return;
	}
	COL++;
	ROW++;
	
	vector<vector<int>> grid(ROW, vector<int>(COL, 0));
	
	for(int row = 0; row < ROW - 1; row++){
		for(int col = 0; col < COL - 1; col++){
			if(amod[row] == bmod[col]){
				grid[row + 1][col + 1] = grid[row][col] + 1;
			}
			else{
				grid[row+1][col+1] = max(grid[row][col+1], grid[row+1][col]);
			}
		}
	}
	
	cout << grid[ROW-1][COL-1] << endl;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}