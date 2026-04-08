#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int k = 0; k < n; k++){
		int num, val;
		cin >> num;
		map<int, int> myMap;
		int maxVal = 0;		
		for(int i = 0; i < num; i++){
			cin >> val;
			maxVal = max(maxVal, val);
			myMap[val]++;
		}
		cout << myMap[maxVal] << endl;
	}
}