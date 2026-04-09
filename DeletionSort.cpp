#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int test;
	cin >> test;
	for(int k = 0; k < test; k++){
		int num;
		cin >> num;
		vector<int> arr(num), arr2(num);
		for(int i = 0; i < num; i++){
			cin >> arr[i];
			arr2[i] = arr[i];
		}
		sort(arr2.begin(), arr2.end());
		if(arr == arr2){
			cout << arr.size() << endl;
		}
		else{
			cout << 1 << endl;
		}
	}
}