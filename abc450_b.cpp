#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int stations;
	cin >> stations;
	
	map<pair<int, int>, long long> record;
	long long temp;
	
	for(int i = 1; i < stations; i++){
		for(int j = i + 1; j <= stations; j++){
			cin >> temp;
			record[{i,j}] = temp;
		}
	}
	
	
	for(int i = 1; i < stations; i++){
		for(int j = i+1; j <= stations; j++){
			for(int k = j + 1; k <= stations; k++){
				if(i < j && j < k){
					if(record[{i,j}] + record[{j,k}] < record[{i,k}]){
						cout << "Yes" << endl;
						return 0;
					}
				}
			}
		}
	}
	
	cout << "No" << endl;
	return 0;
}