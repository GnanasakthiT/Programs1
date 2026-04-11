#include <iostream>
#include <string>

using namespace std;

int main(){
	int len;
	cin >> len;
	
	string input;
	cin >> input;
	
	if(input[0] != 'o'){
		cout << input << endl;
		return 0;
	}
	
	int flag = 0, ind = 0;
	for(; ind < len; ind++){
		if(input[ind] != 'o'){
			break;
		}
	}
	
	for(; ind < len; ind++){
		cout << input[ind];
	}
}