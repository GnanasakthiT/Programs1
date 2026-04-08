#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr;
	int temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		arr.push_back(temp);
	}
	int size = arr.size();
	int currSum = arr[0], maxSum = arr[0];
	for(int i = 1; i < size; i++){
		if(currSum + arr[i] < arr[i])
			currSum = arr[i];
		else
			currSum += arr[i];
		
		if(maxSum < currSum)
			maxSum = currSum;
	}
	
	cout << maxSum;
}