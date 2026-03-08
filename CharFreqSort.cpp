#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<char, int> myMap;

int main(){
	string str;
	cin >> str;
	
	for(char x : str){
		myMap[x]++;
	}
	
	for(auto val : myMap)
		cout << val.first << ' ' << val.second << endl;
	
	map<int, char> freq;
	
	for(auto values : myMap){
		freq.insert(values.second, values.first);
	}
	
	cout << freq.size();
}