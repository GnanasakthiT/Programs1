#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main(){
	int n, temp, min = INT_MIN, sum = 0;
	cin >> n;
	vector<int> nums;
	for(int i = 0; i < n; i++){
		cin >> temp;
		sum += temp;
		if(min > temp)
			min = temp;
		nums.push_back(temp);
	}
	cout << sum;
	for(int i = min + 1; i < sum; i++){
		if(sum%i==0 && sum%min==0){
			cout << i;
		}
	}
	
	
}