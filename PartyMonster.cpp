#include <iostream>
#include <stack>
#include <string>

using namespace std;

void solve(){
	int len;
	string bracks;
	cin >> len;
	cin >> bracks;
	stack<char> brackStack;
	
	for(char each : bracks){
		if(!brackStack.empty() && each == ')' && brackStack.top() == '('){
			brackStack.pop();
		}
		else{
			brackStack.push(each);
		}
	}
	
	
	int pending = 0;
	while(!brackStack.empty()){
		char each = brackStack.top();
		brackStack.pop();
		if(each == '('){
			pending++;			
		}
		else{
			pending--;
		}
	}
	
	if(pending == 0){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}