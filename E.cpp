#include <iostream>
#include <string>

using namespace std;

int main(){
	int cases;
	cin >> cases;
	for(int i = 0; i < cases; i++){
		string s1, s2;
		char temp;
		cin >> s1;
		cin >> s2;
		
		temp = s1[0];
		s1[0] = s2[0];
		s2[0] = temp;
		
		cout << s1 << ' ' << s2 << endl;
	}

}