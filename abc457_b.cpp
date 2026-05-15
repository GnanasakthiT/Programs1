#include <iostream>
#include <vector>

using namespace std;

int main(){
	int R;
	cin >> R;
	vector<vector<int>> nums(R);
	
	for(int row = 0; row < R; row++){
		int C;
		cin >> C;
		for(int col = 0; col < C; col++){
			int temp;
			cin >> temp;
			nums[row].push_back(temp);
		}
	}
	
	int x, y;
	cin >> x >> y;
	cout << nums[x-1][y-1] << endl;
}