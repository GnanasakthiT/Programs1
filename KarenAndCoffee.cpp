#include <iostream>
#include <vector>
#define limit 200001

using namespace std;

int main(){
	vector<int> temp(200001), dptemp(200001);
	int n, k, q;
	cin >> n >> k >> q;
	
	int a, b;
	for(int ind = 0; ind < n; ind++){
		cin >> a >> b;
		temp[a]++;
 		temp[b+1]--;
	}
	
	for(int ind = 1; ind < limit; ind++){
		temp[ind] += temp[ind-1];
	}
	
	for(int ind = 1; ind < limit; ind++){
		if(temp[ind] >= k){
			dptemp[ind]++;
		}
	}
	
	for(int ind = 1; ind < limit; ind++){
		dptemp[ind] += dptemp[ind-1];
	}
	
	for(int ind = 0; ind < q; ind++){
		cin >> a >> b;
		cout << (dptemp[b] - dptemp[a-1]) << endl;
	}
}