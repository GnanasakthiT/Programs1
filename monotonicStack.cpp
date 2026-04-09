#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> mstack;
	int n;
	cin >> n;
	
	int val;
	for(int i = 0; i < n; i++){
		cin >> val;
		while(!mstack.empty() && mstack.top() < val){
			mstack.pop();						
		}
		mstack.push(val);
	}
	
	cout << mstack.size();
}