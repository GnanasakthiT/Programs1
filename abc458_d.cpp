#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	long long int x, q;
	cin >> x;
	cin >> q;
	
	vector<long long int> arr;
	arr.push_back(x);
	
	long long int a, b;
	
	for(int ind = 0; ind < q; ind++){
		cin >> a >> b;
		arr.push_back(a);
		arr.push_back(b);
		sort(arr.begin(), arr.end());
		cout << arr[arr.size() / 2] << endl;
	}
	
}