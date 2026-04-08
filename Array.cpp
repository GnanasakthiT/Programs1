#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
	int num;
	cin >> num;
	vector<int> nums(num), greater(num, 0), smaller(num, 0);
	
	for(int i = 0; i < num; i++){
		cin >> nums[i];
	}
	
	for(int i = 0; i < num; i++){
		int gcount = 0, scount = 0;
		for(int j = i + 1; j < num; j++){
			if(nums[i] > nums[j]){
				gcount++;
			}
			else if(nums[i] < nums[j]){
				scount++;
			}
		}
		greater[i] = gcount;
		smaller[i] = scount;
	}
	
	for(int i = 0; i < num; i++){
		cout << max(greater[i], smaller[i]) << ' ';
	}
	
	cout << endl;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		solve();
	}
}