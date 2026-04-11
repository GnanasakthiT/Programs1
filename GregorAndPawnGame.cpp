#include <iostream>
#include <string>

using namespace std;

void solve(){
	int size;
	cin >> size;
	
	string enemy, mine;
	cin >> enemy >> mine;
	
	int counter = 0;
	
	for(int ind = 0; ind < size; ind++){
		if(mine[ind] == '1'){
			if(enemy[ind] == '0'){
				counter++;
			}
			else if(ind > 0 && enemy[ind-1] == '1'){
				counter++;
			}
			else if(ind+1 < size && enemy[ind+1] == '1'){
				counter++;
				enemy[ind+1] = '0';
			}
		}
	}
	cout << counter << endl;
}

int main(){
	int testcases;
	cin >> testcases;
	while(testcases--){
		solve();
	}
}