#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, i;
	cin >> n;
	int temp;
	vector<int> nums;
	
	for(i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
	
	vector<int> multi;
	vector<int> final;
	
	for(i = 0; i < )
}
/*
int main(){
	int n;
	cin >> n;
	int temp;
	vector<int> nums;
	for(int i = 0; i < n; i++){
		cin >> temp;
		nums.push_back(temp);
	}    
    int size = nums.size();
    
    vector<int> multi;
    vector<int> result;
    int countZero = 0;
    
    multi.push_back(nums[0]);
    if(nums[0]==0)
    	countZero++;
    for(int i = 1; i < size; i++){
    	if(nums[i] == 0){
	    	multi.push_back(multi[i-1]);
	    	countZero++;
    	}
    	else
    		multi.push_back(multi[i-1] * nums[i]);
    }
    
    int lastVal = multi[size-1];
    if(countZero==1){
    	for(int i = 0; i < size; i++){
    		if(nums[i]==0)
    			result.push_back(lastVal);
    		else
    			result.push_back(0);
    	}
    }
    else if(countZero>1){
    	for(int i = 0; i < size; i++){
    		result.push_back(0);    		
    	}
    }
    else{
		for(int i = 0; i < size; i++){
			result.push_back(lastVal/nums[i]);
    	    	
	    }
	}
    for(int x : result)
    	cout << x << ' ';
}
*/