// Problem: Find out the pairs of Bullocks 1
// Contest: HackerRank - temp90
// URL: https://www.hackerrank.com/contests/sjit27126/challenges/find-out-the-pairs-of-bullocks-1
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>

using namespace std;

int main(){
	int n1, n2;
	cin >> n1;
	int counter[100] = {0};
	int sh1[n1];
	for(int i = 0; i < n1; i++){
		cin >> sh1[i];
		counter[sh1[i]]++;
	}
	cin >> n2;
	int sh2[n2];
	for(int i = 0; i < n2; i++){
		cin >> sh2[i];
		counter[sh2[i]]++;
	}
	
	for(int i = 0; i < 50; i++){
		if(counter[i] != 0){
			if(counter[i] % 2 == 0){
				cout << i << " - " << counter[i]/2 << endl;
			}
		}
	}
}