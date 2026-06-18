#include <iostream>

using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	
	if(abs(x - y) > 2){
		cout << "Boring";
	}
	else{
		cout << "Interesting";
	}
}