#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int maxLen = 0;
	string str;
	cin >> str;
	
	int left = 0, right = 0;
	
	map<char, int> indices;
	
	while(right < str.size()){
		if(indices.find(str[right]) != indices.end()){
			if(indices[str[right]] >= left){
				left = indices[str[right]] + 1;
			}
		}
		maxLen = max(maxLen, right - left + 1);
		indices[str[right]] = right;
		right++;
	}
	
	cout << maxLen;
}