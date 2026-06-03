#include <iostream>

using namespace std;

int main(){
	int len;
	cin >> len;
	
	int arr[len];
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	
	if(arr[0] > arr[1]){
		cout << arr[0] << ' ';
	}
	else{
		cout << arr[1] << ' ';
	}
	
	for(int ind = 1; ind <= len - 2; ind++){
		int max = (arr[ind-1] > arr[ind])? arr[ind-1] : arr[ind];
		max = (max > arr[ind + 1])? max : arr[ind + 1];
		cout << max << ' ';
	}
	
	if(arr[len - 2] > arr[len - 1]){
		cout << arr[len-2] << ' ';
	}
	else{
		cout << arr[len - 1] << ' ';
	}
}