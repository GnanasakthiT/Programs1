#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int len;
	cin >> len;
	vector<int> arr(len, 0);
	int sum = 0, temp = 0;
	bool even = false, odd = true;
	
	for(int ind =  0; ind < len; ind++){
		cin >> temp;
		arr[ind] = temp;
		sum += temp;
		if(temp%2)
			odd = true;
		else
			even = true;
		
	}
	
	if(sum%2 && odd || sum%2==0 && even){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
}


int main(){
	int tc;
	cin >> tc;
	
	while(tc--){
		solve();
	}
}