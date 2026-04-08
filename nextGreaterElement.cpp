#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
	stack<int> mstack;
	int n;
	cin >> n;
	
	vector<int> source(n), final(n, -1);
	
	for(int i = 0; i < n; i++){
		cin >> source[i];
	}
	
	for(int i = 0; i < n; i++){
		while(!mstack.empty() && source[i] > source[mstack.top()]){
			final[mstack.top()] = source[i];
			mstack.pop();
		}
		
		mstack.push(i);
	}
	
	for(int i = 0; i < n; i++){
		cout << final[i] << ' ';
	}
}