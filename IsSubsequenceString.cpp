#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	
	int l1 = s1.size(), l2 = s2.size();
	
	int ind1 = 0, ind2 = 0;
	
	while(ind1 < l1 && ind2 < l2){
		if(s1[ind1] == s2[ind2]){
			ind2++;
		}
		ind1++;
	}
	
	if(ind2 == l2){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}