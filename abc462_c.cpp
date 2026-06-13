#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

int main(){
	int n, count = 0;
	cin >> n;
	vector<int> x(n, 0), y(n, 0);
	int minx = INT_MAX, miny = INT_MAX;
	
	for(int ind = 0; ind < n; ind++){
		cin >> x[ind] >> y[ind];
		minx = min(minx, x[ind]);
		miny = min(miny, y[ind]);
	}
	
	for(int ind = 0; ind < n; ind++){
		// if(minx >= x[ind] || miny >= y[ind]){
			// count++;
		// }
		if(minx < x[ind] && miny < y[ind]){
			continue;
		}
		else{
			count++;
		}
	}
	
	cout << count << endl;
}