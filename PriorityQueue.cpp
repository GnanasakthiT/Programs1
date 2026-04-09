#include <iostream>
#include <queue>
#include <vector>
#include <map>

using namespace std;

int main(){
	priority_queue<int> pq;
	map<int, priority_queue<int>> events;
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		pq.push(b);
		events[b].push(a);
	}
	
	while(!pq.empty()){
		int val = pq.top();
		cout << events[val].size() << endl;
		events[val].pop();
		pq.pop();
	}
	
}