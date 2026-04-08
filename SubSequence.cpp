#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> counter(n,1);
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(arr[j] < arr[i]){
				counter[i] = max(counter[i], counter[j]+1);
			}
		}
	}
	
	int maxElement = counter[0]	;
	
	for(int x : counter){
		maxElement = max(maxElement, x);
	}
	
	cout << maxElement;
}