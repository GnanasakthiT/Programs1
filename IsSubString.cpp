#include <iostream>
#include <string>

using namespace std;

int main(){
	string str, substr;
	cin >> str >> substr;
	
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
				return 0;
			}
		}
		
		ind1++;
	}
	
	cout << "No";
}