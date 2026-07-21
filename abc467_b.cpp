// Problem: B - Keep the Change
// Contest: AtCoder - AtCoder Beginner Contest 467
// URL: https://atcoder.jp/contests/abc467/tasks/abc467_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <string>

using namespace std;

int main(){
	int shops;
	cin >> shops;
	
	int worth, given, loss = 0;
	string choice;
	
	while(shops--){
		cin >> worth >> given;
		cin >> choice;
		if(choice == "keep"){
			loss += given - worth;
		}
	}
	
	cout << loss;
}