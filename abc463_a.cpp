#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	double ratio = (double) 16 / 9, curr = (double) a / b;
	
	if(ratio == curr){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
}