#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c){
	switch(tolower(c)){
		case 'a':
		case 'o':
		case 'y':
		case 'e':
		case 'u':
		case 'i':
			return true;
		default:
			return false;
	}
}

int main(){
	string str;
	cin >> str;
	
	string ans = "";
	for(int i = 0; i < (int) str.size(); i++){
		if(!isVowel(str[i])){
			ans += ".";
			ans += tolower(str[i]);
		}
	}
	cout << ans;
}