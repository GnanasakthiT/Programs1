#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
	int test;
	cin >> test;
	for(int k = 0; k < test; k++){
		stack<char> charStack;
		int s;
		cin >> s;
		string str;
		cin >> str;
		for(int i = 0; i < s; i++){
			char c = str[i];
			if(charStack.empty() || charStack.top() != c){
				charStack.push(c);
			}
			else{
				charStack.pop();
			}
		}
		
		if(charStack.empty()){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		
	}
}