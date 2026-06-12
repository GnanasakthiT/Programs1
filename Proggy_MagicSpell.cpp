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

	for(int ind = 1; ind < len - 1; ind++){
		if(arr[ind-1] == arr[ind]){
			continue;
		}
		else if(arr[ind]){
			arr[ind] = arr[ind-1];
		}
		else if(arr[ind] == 0){
			arr[ind] = (arr[ind-1])? 0 : 1;
		}
	}
	
	cout << arr[len-1] << endl;
		
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}