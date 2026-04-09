#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;
	if(str[0] == str[str.size()-1])
		cout << "Yes";
	else
		cout << "No";
	
}