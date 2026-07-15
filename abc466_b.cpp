// Problem: B - Representative Balls
// Contest: AtCoder - AtCoder Beginner Contest 466
// URL: https://atcoder.jp/contests/abc466/tasks/abc466_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
	int avail, balls;
	cin >> avail >> balls;
	map<int, int> counter;
	
	for(int ind = 1; ind <= balls; ind++){
		counter[ind] = -1;
	}
	
	int color, size;
	for(int ind = 0; ind < avail; ind++){
		cin >> color >> size;
		counter[color] = max(counter[color], size);
	}
	
	for(int ind = 1; ind <= balls; ind++){
		cout << counter[ind] << ' ';
	}
}