#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
	int n;
	cin >> n;
	int temp;
	unordered_map<int, int> original;
	for(int i = 0; i < n*2; i++){
		cin >> temp;
		original[temp]++;
	}
	
	for(auto val : original){
		if(val.second == n){
			cout << val.first;
			return 0;
		}
	}
	
}