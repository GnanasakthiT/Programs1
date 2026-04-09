#include <iostream>

using namespace std;

int main(){
	int inp;
	cin >> inp;
	
	int twoPower = 1, twoMul = 2 * inp;
	
	for(int i = 0; i < inp; i++){
		twoPower*=2;
	}
	
	cout << twoPower - twoMul;;
	return 0;
}