#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int len;
	cin >> len;
	vector<int> arr(len, 0);
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	
	for(int ind = 1; ind < len; ind++){
		if(arr[ind - 1] < arr[ind]){
			arr[ind] = arr[ind - 1];
		}
	}

	int sum = 0;
	for(int ind = 0; ind < len; ind++){
		sum += arr[ind];
	}
	
	cout << sum << endl;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}