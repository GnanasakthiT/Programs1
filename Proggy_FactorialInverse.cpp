#include <iostream>
#include <vector>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	vector<int> dp;
	int start = 1;
	dp.push_back(1);
	
	int ref = 1, ind = 1;
	
	while(true){
		dp.push_back(dp[ind-1] * ref);
		ref++;
		ind++;
		cout << dp[ind-1] << endl;
		
		if(dp[ind-1] == a){
			cout << ind - 1 << endl;
			break;
		}
		
		if(dp[ind-1] > a){
			cout << 0 << endl;
			break;
		}
	}
	
	
	
}