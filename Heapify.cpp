#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> arr(n+1);
	
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	
	for(int i = 1; i <= n; i += x2){
		vector<int> seq;
		for(int j = i; j <= n; j = j*2){
			seq.push_back(arr[j]);
		}
		
		sort(seq.begin(), seq.end());

		for(int j = i, ind = 0; j <= n; j = j*2, ind++){
			if(j!=seq[ind]){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;

}

int main(){
	int inp;
	cin >> inp;
	
	for(int i = 0; i < inp; i++){
		solve();
	}
}