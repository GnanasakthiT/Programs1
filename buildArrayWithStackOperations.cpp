#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	vector<int> target(t);
	for(int i = 0; i < t; i++){
		cin >> target[i];
	}
	
	
	stack<int> container;
	vector<char> operations;
	
	int tid = 0;
	for(int i = 1; i <= n; i++){
		if(tid == (int)target.size()){
			break;
		}
		operations.push_back('a');
		container.push(i);
		if(i == target[tid]){
			tid++;
		}
		else{
			operations.push_back('r');
			container.pop();
		}
	}
	
	for(char ch : operations){
		cout << ch << ' ';
	}
	cout << endl << container.size();
}