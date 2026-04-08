#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int cases, low, high, inp, expected;
	cin >> cases;
	for(int i = 0; i < cases; i++){
		int counter = 0;
		int flag = 1;
		cin >> inp;
		cin >> expected;
		low = inp;
		high = inp;
		while(low>=expected || high>=expected){
			if(low == expected || high == expected){
				cout << counter << endl;
				flag = 0;
				break;
			}
			low = low/2;
			high = (high+1)/2;
			counter++;
		}
		if(flag)
		cout << -1 << endl;
	}	
}