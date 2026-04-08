#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> nums;
map<int, int> myMap;

void getInput(){
	int temp, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
}

int main(){
	getInput();
	for(int x : nums){
		myMap[x]++;
	}
	
	for(auto val : myMap)
		cout << val.first << ' ' << val.second << endl;
	
}