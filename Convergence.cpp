#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
	int len;
	cin >> len;
	
	vector<long long int> arr(len, 0);
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	
	sort(arr.begin(), arr.end());
	
	long long int mid = len / 2, left = 0, right = len - 1, count = 0;
	
	while(left < mid && right > mid){
		if(arr[left] != arr[mid] || arr[right] != arr[mid]){
			count++;
		}
			left++;
			right--;
	}
	
	cout << count << endl;
}

int main(){
	int tc;
	cin >> tc;
	
	while(tc--){
		solve();
	}
}