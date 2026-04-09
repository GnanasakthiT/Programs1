// Problem: C - 2026
// Contest: AtCoder - AtCoder Beginner Contest 439
// URL: https://atcoder.jp/contests/abc439/tasks/abc439_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>

using namespace std;

void goods(int num){
	vector<int> nums;
	int count = 0;
	for(int k = 1; k <= num; k++){
		for(int i = 1; i < k; i++){
			for(int j = i + 1; j <= k; j++){
				if((i*i+j*j)==k){
					count++;
					nums.push_back(k);
				}
			}
		}	
	}
	cout << count << endl;
	for(int x : nums){
		cout << x << ' ';
	}

}

int main(){
	int num;
	cin >> num;
	goods(num);
}