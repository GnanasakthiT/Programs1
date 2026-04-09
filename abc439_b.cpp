// Problem: B - Happy Number
// Contest: AtCoder - AtCoder Beginner Contest 439
// URL: https://atcoder.jp/contests/abc439/tasks/abc439_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>

using namespace std;

int SqDigits(int n){
	int sum = 0;
	while(n){
		sum += (n%10)*(n%10);
		n/=10;		
	}
	return sum;
}

int main(){
	int inp;
	cin >> inp;
	int check = 0, val = inp;
	for(int i = 0; i < 20; i++){
		check = SqDigits(val);
		if(check == 1){
			cout << "Yes";
			return 0;
		}
		val = check;
	}
	cout << "No";
	
}