#include <iostream>
#include <vector>

using namespace std;

int main(){
	int cases, arrSize, temp;
	cin >> cases;
	
	while(cases){
		cin >> arrSize;
		vector<int> nums;
		int flag = 1;
		for(int i = 0; i < arrSize; i++){
			cin >> temp;
			nums.push_back(temp);
		}
		
		for(int i = 0; i < arrSize; i++){
			if(nums[i] == 67){
				cout << "YES" << endl;
				flag = 0;
				break;
			}
		}
		
		if(flag){
			cout << "NO" << endl;
		}
		cases--;
	}
}