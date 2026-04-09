#include <iostream>
#include <vector>

using namespace std;

int main(){
	int num;
	cin >> num;
	int i, j, k, temp, count = 0, commonDiv;
	vector<int> nums;
	
	for(i = 0; i < num; i++){
		cin >> temp;
		nums.push_back(temp);
	}
	
	for(i = 0; i < num; i++){
		if(nums[i]%7==0){
			commonDiv = nums[i]/7;
			for(j = 0; j < num; j++){
				if(nums[j] == 3*commonDiv){
					for(k = 0; k < num; k++){
						if(nums[k] == 5*commonDiv){
							if( (k<i && k<j) || (k>i && k>j) ){
								count++;
							}
						}
					}
				}
			}
		}
	}
	
	cout << count;
}