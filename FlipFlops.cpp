#include <iostream>
#include <vector>

using namespace std;

void solve(){
	long long monsters, power, flips;
	cin >> monsters >> power >> flips;
	
	vector<long long> monstersPower(monsters);
	for(long long i = 0; i < monsters; i++){
		cin >> monstersPower[i];
	}
	
	for(long long i = 0; i < monsters; i++){
		long long val = monstersPower[i];
		if(power >= val){
			while(val < power && flips != 0){
				val++;
				flips--;
			}
			power += val;
		}
	}
	
	cout << power << endl;	
}

int main(){
	int cases;
	cin >> cases;
	
	while(cases--){
		solve();
	}
}