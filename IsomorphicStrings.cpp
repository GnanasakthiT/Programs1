#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isIsomorphic(string a, string b){
	unordered_map<char, int> count1;	
	unordered_map<char, int> count2;
	
	for(char c : a){
		count1[c]++;
	}
	for(char c : b){
		count2[c]++;
	}
	
	if(count1.size() == count2.size()){
		return true;
	}
	
	return false;
}

int main(){
	string inp1;
	cin >> inp1;
	string inp2;
	cin >> inp2;
	
	if(isIsomorphic(inp1, inp2)){
		cout << "Yes";
		return 0;
	}
	cout << "No";
	
}