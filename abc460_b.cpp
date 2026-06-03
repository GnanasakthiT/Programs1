#include <iostream>
#include <cmath>

using namespace std;

void solve(){
	long long int x1, y1, x2, y2, r1, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	
	double dx = (double) x1 - x2, dy = (double) y1 - y2;
	
	double dist = sqrt((dx*dx) + (dy*dy));
	
	double diff = fabs((double)r1 - r2), sum = (double)r1 + r2;
	
	if(dist <= sum && dist >= diff){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
}

int main(){
	int tc;
	cin >> tc;
	while(tc-->0){
		solve();
	}
}