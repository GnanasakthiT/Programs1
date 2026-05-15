#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int len;
	cin >> len;
	int sum = 0, temp;
	
	for(int ind = 0; ind < len; ind++){
		cin >> temp;
		if(temp != 1){
			sum += temp;
		}
	}
	
	if(temp == 1){
		sum += temp;
	}
	
	cout << sum << endl;
	
}

int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
		solve();
	}
}