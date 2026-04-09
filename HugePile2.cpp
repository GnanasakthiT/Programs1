#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
	unordered_set<int> mySet;
	int n, required;
	cin >> n;
	cin >> required;
	
	mySet.insert(n/2);
	mySet.insert((n+1)/2);
	
	while(true){
		if(mySet.front() == 1)
			break;
		if(mySet.find(required) != mySet.end()){
			cout << "Found" << endl;
			return 0;
		}
		int val = mySet.front();
		mySet.pop();
		mySet.insert(val/2);
		mySet.insert((val+1)/2);
	}
	cout << "Not found" << endl;
	return 0;
}