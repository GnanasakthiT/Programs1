#include <iostream>
#include <vector>

using namespace std;

int main(){
	int len = 0;
	cin >> len;
	vector<int> nums(len, 0);
	for(int ind = 0; ind < len; ind++){
		cin >> nums[ind];
	}
	int index;
	cin >> index;
	
	cout << nums[index-1] << endl;
}