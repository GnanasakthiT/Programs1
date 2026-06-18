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
	
	for(int ind = 1; ind < len; ind++){
		if(arr[ind - 1] > arr[ind]){
			arr[ind] += arr[ind - 1];
		}
	}
	
	cout << arr[len - 1] << endl;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}	
}