#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n, eachLen = 0, dotLen = 0;
	cin >> n;
	vector<string> strs;
	string temp;
	int maxLen = 0;
	for(int i = 0; i < n; i++){
		cin >> temp;
		strs.push_back(temp);
		if(maxLen < (int)temp.size()){
			maxLen = temp.size();
		}
	}
	
	for(string val : strs){
		eachLen = val.size();
		dotLen = maxLen - eachLen;
		dotLen /= 2;
		for(int i = 0; i < dotLen; i++)
			cout << '.';
		cout << val;
		for(int j = 0; j < dotLen; j++)
			cout << '.';	
		cout << endl;
	}
}