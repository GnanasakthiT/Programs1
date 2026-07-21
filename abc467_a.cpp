// Problem: A - Obesity
// Contest: AtCoder - AtCoder Beginner Contest 467
// URL: https://atcoder.jp/contests/abc467/tasks/abc467_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>

using namespace std;

int main(){
	float h, w;
	cin >> h >> w;
	
	h = (float) h / 100;
	
	float bmi = (float) w / h / h;
	
	if(bmi >= 25){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}