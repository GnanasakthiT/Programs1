#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;
	int count = 0, len = str.size();
	
	for(int ind = 0; ind < len; ind++){
		if(str[ind] == 'C'){
			count++;
			count += min(ind, len - ind - 1);
		}
	}
	
	cout << count << endl;
}