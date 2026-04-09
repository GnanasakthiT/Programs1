#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	string str;
	cin >> str;
	map<char, int> counter;
	
	for(char c : str)	{
		if(c == 'A'){
			counter[c]++;
		}
		else if(c == 'B'){
			counter[c]++;
		}
		else if(c == 'C'){
			counter[c]++;
		}
	}
	
	int minVal = str.size();
	for(auto val : counter){
		minVal = min(minVal, val.second);
	}
	cout << minVal;
}