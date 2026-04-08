#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> minHeap;
	priority_queue<int, vector<int>> maxHeap;
	int temp;
	
	while(n--){
		cin >> temp;
		minHeap.push(temp);
		maxHeap.push(temp);
	}
	
	int minCost = 0, maxCost = 0;
	
	while(minHeap.size()>=2){
		int min1, min2;
		min1 = minHeap.top();
		minHeap.pop();
		min2 = minHeap.top();
		minHeap.pop();
		minHeap.push(min1+min2);
		minCost += (min1 + min2);
	}
	cout << minCost << endl;	
	
	while(maxHeap.size()>=2){
		int min1, min2;
		min1 = maxHeap.top();
		maxHeap.pop();
		min2 = maxHeap.top();
		maxHeap.pop();
		maxHeap.push(min1+min2);
		maxCost += (min1 + min2);
	}
	cout << maxCost << endl;
}