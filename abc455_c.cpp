#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
	long long len, k;
	cin >> len >> k;
	
	vector<long long> nums(len, 0);
	map<long long, long long> myMap;
	
	for(int ind = 0; ind < len; ind++){
		cin >> nums[ind];
		myMap[nums[ind]] += nums[ind];
	}
	
	vector<long long> sums;
	
	for(auto val : myMap){
		sums.push_back(val.second);
	}
	
	sort(sums.begin(), sums.end(), greater<long long>());
	
	long long ans = 0;
	
	for(int ind = 0; ind < (int) sums.size(); ind++){
		if(ind < k){
			ans += 0;
		}
		else{
			ans += sums[ind];
		}
	}
	
	cout << ans << endl;
	
}