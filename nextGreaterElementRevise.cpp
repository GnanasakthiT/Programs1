#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
	int len;
	cin >> len;
	vector<int> arr(len);
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	
	vector<int> result(len, -1);
	
	stack<int> indices;
	
	for(int ind = 0; ind < len; ind++){
		while(!indices.empty() && arr[ind] > arr[indices.top()]){
			result[indices.top()] = arr[ind];
			indices.pop();
		}
		indices.push(ind);
	}
	
	for(int ind = 0; ind < len; ind++){
		if(result[ind] == -1){
			result[ind] = arr[ind];
		}
	}
	
	for(int val : result){
		cout << val << ' ';
	}
}