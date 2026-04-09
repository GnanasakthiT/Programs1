#include <iostream>

using namespace std;

bool pof(int n){
	if(n==1){
		return true;
	}
	int count = 0;
	while(n!=1){
		if(n%2!=0){
			return false;
		}
		count++;
		n/=2;
	}
	if(count%2)
		return false;
	return true;
	
}

int main(){
	int num;
	cin >> num;
	cout << pof(num);
}