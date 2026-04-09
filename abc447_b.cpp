#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string str;
	cin >> str;
	map<char,int> counter;
	int maxOccur = 0;
	
	for(char c : str){
		counter[c]++;
	}
	
	for(auto val : counter){
		maxOccur = max(maxOccur, val.second);
	}
	
	for(char c : str){
		if(counter[c]!=maxOccur){
			cout << c;
		}
	}
}