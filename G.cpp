#include <iostream>

using namespace std;

int main(){
	int emp;
	cin >> emp;
	
	int count = 0;
	
	for(int i = 1; i < emp; i++){
		if(emp%i==0)
			count++;
	}
	cout << count;
}