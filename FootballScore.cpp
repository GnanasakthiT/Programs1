#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<char, int> scores;
	int maxScore = 0;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		for(char c : s){
			scores[c]++;
			if(maxScore < scores[c]){
				maxScore = scores[c];
			}
			
		}
	}
	
	for(auto x : scores){
		if(x.second ==  maxScore){
			cout << x.first;
		}
	}
	
}