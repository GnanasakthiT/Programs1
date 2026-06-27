// Problem: A - Decisive Battle
// Contest: AtCoder - Japanese Student Championship 2026 -Advance- Qualification (AtCoder Beginner Contest 464)
// URL: https://atcoder.jp/contests/abc464/tasks/abc464_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	int result = 0;
	
	for(char ch : str){
		if(ch == 'E'){
			result++;
		}
		else if(ch == 'W'){
			result--;
		}
	}
	
	if(result > 0){
		cout << "East";
	}
	else{
		cout << "West";
	}
}