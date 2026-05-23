#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;
	int len;
	cin >> len;
	
	for(int ind = len; ind < str.size() - len; ind++){
		cout << str[ind];
	}
}