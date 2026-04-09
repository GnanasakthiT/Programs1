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
	
	for(auto map : count1){
		
	}
}

int main(){
	string inp1;
	cin >> inp1;
	string inp2;
	cin >> inp2;
	
	if(isIsomorphic){
		cout << "Yes";
		return 0;
	}
	cout << "No";
	
}