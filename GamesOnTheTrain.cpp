#include <iostream>
#include <limits.h>
#include <algorithm>

using namespace std;

void solve(){
	int len;
	cin >> len;
	
	int minVal = INT_MAX, maxVal = INT_MIN, temp;	
	
	for(int ind = 0; ind < len; ind++){
		cin >> temp;
		minVal = min(minVal, temp);
		maxVal = max(maxVal, temp);
	}
	cout << maxVal - minVal + 1 << endl;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}