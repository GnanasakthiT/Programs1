#include <bits/stdc++.h>

using namespace std;

int main(){
	int person, type;
	cin >> person >> type;
	
	map<int, int> types;
	
	for(int ind = 1; ind <= type; ind++){
		types[ind] = 0;
	}
	
	int temp;
	for(int ind = 0; ind < person; ind++){
		cin >> temp;
		types[temp]++;
	}
	
	bool flag = false;
	for(auto val : types){
		if(val.second > 1){
			cout << "No" << endl;
			flag = true;
			break;
		}
	}
	if(!flag)
		cout << "Yes" << endl;
	
	
	flag = false;
	for(auto val : types){
		if(val.second == 0){
			flag = true;
			cout << "No" << endl;
			break;
		}
	}
	
	if(!flag)
		cout << "Yes" << endl;
}