#include <iostream>

using namespace std;

int divide(int a, int b){
	if(b == 0){
		throw string("Invalid");
	}
	return a/b;
}


int main(){
	try{
		cout << divide(34,0);
	}
	catch(string e){
		cout << e << endl;
	}
}