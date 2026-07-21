// Problem: D - Multiple of 2019
// Contest: AtCoder - AtCoder Beginner Contest 164
// URL: https://atcoder.jp/contests/abc164/tasks/abc164_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	string num;
	cin >> num;
	map<int, int> freq;
	
	freq[0] = 1;
	
	int len = num.size();
	
	long long int ans = 0;
	int power = 1, rem = 0;
	
	for(int ind = len - 1; ind >= 0; ind--){
		rem = (rem + (num[ind] - '0')*power)%2019;
		ans += freq[rem];
		freq[rem]++;
		power = (power * 10) % 2019;
	}
	
	cout << ans;	
}