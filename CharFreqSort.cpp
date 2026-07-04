#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main(){
	string str;
	cin >> str;
	
	map<char, int> myMap;
	for(char x : str){
		myMap[x]++;
	}
	
	
	map<int, char> freq;
	
	for(auto values : myMap){
		freq[values.second]  = values.first;
	}
	
	for(auto val : freq)
		cout << val.first << ' ' << val.second << endl;
}