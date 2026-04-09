#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main(){
	int testCases;
	cin >> testCases;
	
	for(int i = 0; i < testCases; i++){
		int deers;
		cin >> deers;
		
		int ans;
		long long int currWt = 0LL, currPower = 0LL;
		int weight, power;
		
		vector<tuple<int, int, int>> deerList(deers);
		for(int k = 0; k < deers; k++){
			cin >> weight >> power;
			deerList[k] = make_tuple(weight + power, weight, power);
			currWt += weight;
		}
		sort(deerList.begin(), deerList.end(), greater<>());
		ans = deers;
	
		for(int j = 0; (j < deers) && (currPower<currWt); j++){
			ans--;
			currWt -= get<1>(deerList[j]);
			currPower += get<2>(deerList[j]);
		}
		cout << ans << endl;
	}
}