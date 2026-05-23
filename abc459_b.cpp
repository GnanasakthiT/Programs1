#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string> arr(n);
	
	for(int ind = 0; ind < n; ind++){
		cin >> arr[ind];
	}
	
	for(int ind = 0; ind < n; ind++){
		char ch = arr[ind][0];
		
		if(ch == 'a' || ch == 'b' || ch == 'c'){
			cout << 2;
		}
		else if(ch == 'd' || ch == 'e' || ch == 'f'){
			cout << 3;
		}
		else if(ch == 'g' || ch == 'h' || ch == 'i'){
			cout << 4;
		}
		else if(ch == 'j' || ch == 'k' || ch == 'l'){
			cout << 5;
		}
		else if(ch == 'm' || ch == 'n' || ch == 'o'){
			cout << 6;
		}
		else if(ch == 'p' || ch == 'q' || ch == 'r' || ch == 's'){
			cout << 7;
		}
		else if(ch == 't' || ch == 'u' || ch == 'v'){
			cout << 8;
		}
		else if(ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z'){
			cout << 9;
		}
	}
}