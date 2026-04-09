#include <iostream>
#include <string>

using namespace std;

int main(){
	string inp;
	int dot = 0;
	cin >> inp;
	for(char c : inp){
		if(c == 'i' || c == 'j'){
			dot++;
		}
	}
	cout << dot;
}