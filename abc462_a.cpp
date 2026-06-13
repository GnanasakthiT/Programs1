#include <iostream>
#include <string>

using namespace std;

int main(){
	string inp, result = "";
	cin >> inp;
	
	
	for(char each : inp){
		if(isdigit(each)){
			result += each;
		}
	}
	cout << result << endl;
}