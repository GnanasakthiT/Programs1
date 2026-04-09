#include <bits/stdc++.h>

using namespace std;

int main(){
	string inp;
	cin >> inp;
	string hello = "hello";
	
	int ind = 0;
	
	for(int idx = 0; idx < (int)inp.size(); idx++){
		if(hello[ind] == inp[idx]){
			ind++;
			if(ind == (int)hello.size()){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	
	cout << "NO" << endl;
}