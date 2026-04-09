#include <iostream>
#include <vector>

using namespace std;

vector<int> nums;

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
	
}