#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int flag = 0;
	
	for(char c : s){
		flag ^= (1<<(c-'a'));
	}
	
	if(flag == 0 || (flag&(flag-1)) == 0){
		cout << "yes";
	}
	else{
		cout << "no";
	}
}