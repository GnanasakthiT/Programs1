#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int dishes, pepper;
	cin >> dishes >> pepper;
	
	map<int, int> pepperAvail;
	int temp;
	for(int i = 1; i <= pepper; i++){
		cin >> temp;
		pepperAvail[i] = temp;
	}
	
	int dish, limit, minVal, maxPepper = 0;
	for(int j = 0; j < dishes; j++){
		cin >> dish >> limit;
		
		minVal = min(limit, pepperAvail[dish]);
		pepperAvail[dish] -= minVal;
		maxPepper += minVal;
	}
	cout << maxPepper;
}