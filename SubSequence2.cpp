#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	vector<int> counter;
	
	for(int i = 0; i < n; i++){
		auto iter = lower_bound(counter.begin(), counter.end(), arr[i]);
		if(iter == counter.end()){
			counter.push_back(arr[i]);
		}
		else{
			*iter = arr[i];
		}
	}
	
	cout << counter.size();
}