#include <iostream>
#include <vector>

using namespace std;

int main(){
	int R, C;
	cin >> R >> C;
	vector<vector<int>> grid(R, vector<int>(C, 0));
	
	for(int row = 0; row < R; row++){
		for(int col = 0; col < C; col++){
			for(int x = 0; x < R; x++){
				for(int y = 0; y < C; y++){
					if(abs(row - x) + abs(col - y) == 1){
						grid[row][col]++;
					}
				}
			}
		}
	}
	
	for(int row = 0; row < R; row++){
		for(int col = 0; col < C; col++){
			cout << grid[row][col] << ' ';
		}
		cout << endl;
	}
}