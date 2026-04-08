#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<vector<int>> matrix;
	
	int r, c, i, j;
	cin >> r >> c;
	int temp;
	
	for(i = 0; i < r; i++){
		vector<int> eachRow;
		for(j = 0; j < c; j++){
			cin >> temp;
			eachRow.push_back(temp);
		}
		matrix.push_back(eachRow);
	}
	
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	
	vector<vector<int>> transposed;
	for(i = 0; i < r; i++){
		vector<int> eachRow;
		for(j = 0; j < c; j++){
			eachRow.push_back(matrix[j][i]);
		}
		transposed.push_back(eachRow);
		
	}
	cout << endl;	
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			cout << transposed[i][j] << ' ';
		}
		cout << endl;
	}

	for(i = 0; i < r/2; i++){
		for(j = 0; j < c; j++){
			temp = transposed[j][i];
			transposed[j][i] = transposed[j][r-1-i];
			transposed[j][r-1-i] = temp;
		}
	}

	cout << endl;	
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			cout << transposed[i][j] << ' ';
		}
		cout << endl;
	}
	

}