#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int counter = 0;
	while(n>1){
		if(n%2==0){
			n/=2;
		}
		else{
			n-=1;
		}
		counter++;
	}
	
	cout << counter << endl;
}