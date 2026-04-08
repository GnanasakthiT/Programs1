#include <iostream>
#include <string>

using namespace std;

void solve(){
	int students;
	cin >> students;
	
	string leftright;
	cin >> leftright;
	
	for(int i = 0; i < students; i++){
		if(leftright[i] == 'L'){
			cout << i + 1 << endl;
			return;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t-->0){
		solve();
	}
}