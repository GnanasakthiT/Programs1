#include <iostream>
#include <map>

using namespace std;

map<int, int> members;

int find(int mem){
	if(members[mem] != mem){
		members[mem] = find(members[mem]);
	}
	return members[mem];
}

int main(){
	int num;
	cin >> num;
	
	for(int i = 0; i <= num; i++){
		members[i] = i;
	}
	
	int mod, leader, mem;
	cin >> mod;
	for(int i = 0; i < mod; i++){
		cin >> leader >> mem;
		members[mem] = leader;
	}
	
	for(int i = 0; i <= num; i++){
		cout << i << " " << find(i) << endl;
	}
}