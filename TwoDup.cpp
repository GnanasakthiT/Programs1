#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int temp;
	unordered_map<int, int> counter;
	vector<int> duplicates;
	
	for(int i = 0; i < n; i++){
		cin >> temp;
		counter[temp]++;
	}
	
	for(auto x : counter){
		if(x.second > 1){
			duplicates.push_back(x.first);
		}
	}
	
	for(int m : duplicates)
		cout << m << ' ';
		
	return 0;
}