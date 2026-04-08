#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

string freqSort(string str){
	string final;
	int counter[55] = {0};
	
	for(char c : str){
		counter['A'-c]++;
	}
	
	int len = str.size();
	
	sort(counter, counter+55);
	
	for(int i = 0; i < len; i++)
		
	
	
	return final;
}

int main(){
	string inp;
	cin >> inp;
	cout << freqSort(inp);
}