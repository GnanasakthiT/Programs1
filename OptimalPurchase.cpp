#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

void solve(){
	long long stud, single, group;
	cin >> stud >> single >> group;
	
	long long threes = stud / 3, rem = stud % 3;
	
	cout << threes*min(group, single*3) + min(single*rem, group) << endl;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}