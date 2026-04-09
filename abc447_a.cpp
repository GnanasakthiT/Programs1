#include <iostream>

using namespace std;

int main(){
	int seats, person;
	cin >> seats >> person;
	
	if((seats+1)/2 >= person){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
}