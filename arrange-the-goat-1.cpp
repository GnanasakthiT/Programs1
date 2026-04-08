// Problem: Arrange the Goat 1
// Contest: HackerRank - temp90
// URL: https://www.hackerrank.com/contests/sjit27126/challenges/arrange-the-goat-1
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n1, n2;
	cin >> n1;
	vector<int> shelter1;
	vector<int> shelter2;
	int temp;
	for(int i = 0; i < n1; i++){
		cin >> temp;
		shelter1.push_back(temp);
	}
	cin >> n2;
	for(int i = 0; i < n2; i++){
		cin >> temp;
		shelter2.push_back(temp);
	}
	
	vector<int> combined;
	for(int x : shelter1){
		combined.push_back(x);
	}
	for(int x : shelter2){
		combined.push_back(x);
	}
	sort(combined.begin(), combined.end());
	
	for(int x : combined){
		cout << x << ' ';
	}
}
