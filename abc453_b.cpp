#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int times, k;
	cin >> times >> k;
	
	vector<int> timeStamp(times + 1, 0);
	
	for(int ind = 0; ind <= times; ind++){
		cin >> timeStamp[ind];
	}
	
	int currVal = timeStamp[0], currTime = 0;
	cout << currTime << ' ' << currVal << endl;
	
	for(int ind = 1; ind <= times; ind++){
		if(abs(currVal - timeStamp[ind]) >= k){
			cout << ind << ' ' << timeStamp[ind] << endl;
			currTime = ind;
			currVal = timeStamp[ind];
		}
	}
}