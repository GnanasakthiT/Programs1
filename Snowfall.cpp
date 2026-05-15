#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve(){
	int len;
	cin >> len;
	vector<int> nums(len, 0);
	for(int ind = 0; ind < len; ind++){
		cin >> nums[ind];
	}
	int comb = (int)pow(2,len);
	
	int counter = 0;
	
	for(int eachComb = 0; )
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}