#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int len, temp;
	cin >> len;
	int zeroes = 0, ones = 0, twos = 0;
	for(int ind = 0; ind < len; ind++){
		cin >> temp;
		if(temp == 0) zeroes++;
		else if(temp == 1) ones++;
		else twos++;
	}
	
	int result = 0;
	result += zeroes;
	int div = min(ones, twos);
	result += div;
	ones -= div;
	twos -= div;
	result += ones/3;
	result += twos/3;
	cout << result << endl;
	
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}