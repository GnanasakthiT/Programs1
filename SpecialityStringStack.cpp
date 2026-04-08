#include <iostream>
#include <string>
#include <stack>

using namespace std;

void solve(){
	int len;
	cin >> len;
	string input;
	cin >> input;
	if(len <= 1){
		cout << "NO" << endl;
		return;
	}
	stack<char> charStack;
	charStack.push(input[0]);

	
	for(int index = 1; index < len; index++){
		char currChar = input[index];
		if(!charStack.empty() && charStack.top() == currChar){
			charStack.pop();
		}
		else{
			charStack.push(currChar);
		}
	}
	
	if(charStack.empty()){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
	return;
}

int main(){
	int testCases;
	cin >> testCases;
	
	while(testCases--){
		solve();
	}
}