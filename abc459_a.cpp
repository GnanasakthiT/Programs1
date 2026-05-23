#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s = "HelloWorld";
	
	for(int ind = 0; ind < s.size(); ind++){
		if(ind == n - 1){
			continue;
		}
		cout << s[ind];
	}
}