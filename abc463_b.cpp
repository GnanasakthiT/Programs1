#include <iostream>
#include <string>

using namespace std;

int main(){
	int len;
	cin >> len;
	char col;
	cin >> col;
	bool flag = false;
	
	string temp;
	for(int ind = 0; ind < len; ind++){
		cin >> temp;
		
		if(temp[col - 65] == 'o'){
			flag = true;
		}
	}
	
	if(flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}