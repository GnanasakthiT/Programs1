#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int shari, neta, count = 0;
	cin >> shari >> neta;
	
	vector<int> sweights(shari, 0), nweights(neta, 0);
	for(int ind = 0; ind < shari; ind++){
		cin >> sweights[ind];
	}
	
	for(int ind = 0; ind < neta; ind++){
		cin >> nweights[ind];
	}
	
	sort(sweights.begin(), sweights.end());
	sort(nweights.begin(), nweights.end());
	
	shari -= 1;
	neta -= 1;
	while(shari >= 0 && neta >= 0){
		if(sweights[shari] * 2 >= nweights[neta]){
			count++;
			shari--;
			neta--;
		}
		else{
			neta--;
		}
	}
	
	cout << count;
}