#include <iostream>
#include <vector>

using namespace std;

void subset(int index, vector<int>& arr, vector<int>& subarray, int total){
	if(index == total){
		for(int val : subarray){
			cout << val << ' ' ;
		}
		if(subarray.size() == 0){
			cout << "[]";
		}
		
		cout << endl;
		return;
	}
	
	subset(index + 1, arr, subarray, total);
	subarray.push_back(arr[index]);
	subset(index + 1, arr, subarray, total);
	subarray.pop_back();
}


int main(){
	int len;
	cin >> len;
	vector<int> arr(len);
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	vector<int> sub;
	subset(0, arr, sub, len);
}