#include <bits/stdc++.h>

using namespace std;

int paths(int row, int col){
	if(row == 0 && col == 0){
		return 1;
	}
	if(row < 0 || col < 0){
		return 0;
	}
	
	int up = paths(row-1,col);
	int left = paths(row,col-1);
	
	return up + left;
}

int main(){
	int R, C;
	cin >> R >> C;
	
	cout << paths(R-1, C-1);
}