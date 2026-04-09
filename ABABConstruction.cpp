#include <iostream>
#include <string>

using namespace std;

void solve(){
	string s;
	int inp;
	cin >> inp;
	cin >> s;
	
	if(inp%2 && s[0] == 'b'){
		cout << "NO" << endl;
		return;
	}
	
	int i = (inp&1)?1:0;
	for(; i < s.size(); i+=2){
		if(s[i] == s[i+1] && s[i] != '?'){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		solve();
	}
}