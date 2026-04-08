#include <iostream>
#include <vector>

using namespace std;

int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		int num;
		cin >> num;
		vector<int> nums(num);
		for(int i = 0; i < num; i++){
			cin >> nums[i];
		}
		
		bool flag = false;
		for(int j = 1; j < num; j++){
			if(nums[j] < nums[j-1]){
				flag = true;
				break;
			}
		}
	
		if(flag){
			cout << 1 << endl;
		}
		else{
			cout << num << endl;
		}
	}
}