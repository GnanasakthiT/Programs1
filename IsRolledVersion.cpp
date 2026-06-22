#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	
	s1 += s1;
	int p1 = 0, p2 = 0;
	
	while(p1 < s1.size()){
		if(s1[p1] == s2[p2]){
			p1++;
			p2++;
			if(p2 == s2.size()){
				cout << "Yes";
				return 0;
			}
		}
		else{
			if(p2 != 0){
				p1 = p1 - p2 + 1;
				p2 = 0;
			}
			else{
				p1++;
			}
		}
	}
	
	cout << "No";
}