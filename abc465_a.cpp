// Problem: A - Supermajority
// Contest: AtCoder - AtCoder Beginner Contest 465
// URL: https://atcoder.jp/contests/abc465/tasks/abc465_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <string>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	float dec = (float) 2 / 3;
	float ad = (float) a;
	float bd = (float) b * dec;
	
	if(ad > bd){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}