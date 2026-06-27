#include <iostream>
#include <string>

using namespace std;

void inbuiltFun(string str, string substr){
	if(str)
}

void func(string str, string substr){
	int l1 = str.size(), l2 = substr.size();
	
	int ind1 = 0, ind2 = 0;
	
	while(ind1 < l1){
		if(str[ind1] == substr[ind2]){
			int ind;
			for(ind = 0; ind < l2; ind++){
				if(str[ind1 + ind] != substr[ind]){
					break;
				}
			}
			if(ind == l2){
				cout << "Yes " << ind1;
				return;
			}
		}
		
		ind1++;
	}
	
	cout << "No";
}

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	
	s1 += s1;
	int p1 = 0, p2 = 0;
	// func(s1, s2);
	inbuiltFun(s1, s2);
	
	// while(p1 < s1.size()){
		// if(s1[p1] == s2[p2]){
			// p1++;
			// p2++;
			// if(p2 == s2.size()){
				// cout << "Yes";
				// return 0;
			// }
		// }
		// else{
			// if(p2 != 0){
				// p1 = p1 - p2 + 1;
				// p2 = 0;
			// }
			// else{
				// p1++;
			// }
		// }
	// }
// 	
	// cout << "No";
}