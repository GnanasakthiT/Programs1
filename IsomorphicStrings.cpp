#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	
	map<char, char> link;
	
	int len = s.size();
	
	for(int ind = 0; ind < len; ind++){
		if(link.find(s[ind]) != link.end()){
			if(link[s[ind]] != t[ind]){
				cout << "No";
				return 0;
			}
		}
		else{
			link[s[ind]] = t[ind];
		}
	}
	
	for(auto each : link){
		if(count(s.begin(), s.end(), each.first) != count(t.begin(), t.end(), each.second)){
			cout << "No";
			return 0;
		}
	}
	
	cout << "Yes";
}