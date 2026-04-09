#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	
	vector<int> bagBalls(n);
	for(int k = 0; k < n; k++){
		cin >> bagBalls[k];
	}
	
	for(int i = 0; i < q; i++){
		int qsize;
		cin >> qsize;
		
		vector<int> querry(qsize);
		vector<bool> ballsAvail(n, true);
		
		for(int j = 0; j < qsize; j++){
			cin >> querry[j];
		}
		
		for(int val : querry){
			ballsAvail[val-1] = false;
		}
		
		int minVal = INT_MAX;
		for(int g = 0; g < n; g++){
			bool val = ballsAvail[g];
			if(val){
				minVal = min(minVal, bagBalls[g]);
			}
		}
		cout << minVal << endl;		
	}
}