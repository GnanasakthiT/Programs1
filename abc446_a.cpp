#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string str;
	cin >> str;
	cout << "Of";
	for(char c : str){
		cout << (char)tolower(c);
	}
}