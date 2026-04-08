#include <iostream>
#include <string>

using namespace std;

bool isSub(string s, string t){
	int subInd = 0, strInd = 0, sSize = s.size(), tSize = t.size();
	while((strInd<tSize)&&(subInd<sSize)){
		if(t[strInd] == s[subInd]){
			subInd++;
		}
		strInd++;
	}
	if(subInd==sSize){
		return true;
	}
	return false;
}

int main(){
	string a, b;
	cin >> a >> b;
	cout << isSub(a,b);
}