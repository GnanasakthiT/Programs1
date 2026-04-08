#include <iostream>

using namespace std;

void solve(){
	int plays, special, sum = 0, temp;
	cin >> plays >> special;
	
	for(int ind = 0; ind < plays; ind++){
		cin >> temp;
		sum += temp;
	}
	
	if(sum%2){
		cout << "YES" << endl;
	}
	else{
		if((special*plays)%2){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}

int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
		solve();
	}
}