#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int n, temp, maxVal = 1;
	cin >> n;
	map<int, int> counter;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(counter.find(temp-1) != counter.end())	{
			counter[temp] = counter[temp-1] + 1;
			maxVal = max(maxVal, counter[temp]);
		}
		else{
			counter[temp] = 1;
		}
	}
	cout << maxVal;
}