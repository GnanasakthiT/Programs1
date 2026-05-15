#include <iostream>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	
	while(tc--){
		int x, y;
		cin >> x >> y;
		
		if(x%2 && y%2){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}