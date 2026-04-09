#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;
	cin >> input;
	if(input.size()%5){
		cout << "No" << endl;
	}
	else{
		cout << "Yes" << endl;
	}
}