#include <iostream>
#include <queue>

using namespace std;

int main(){
	int querries;
	cin >> querries;
	priority_queue<int, vector<int>, greater<int>> trees;
	
	while(querries--){
		int choice, height;
		cin >> choice >> height;
		if(choice == 1){
			trees.push(height);			
		}
		else{
			while(!trees.empty() && trees.top() <= height){
				trees.pop();
			}
		}
		
		cout << trees.size() << endl;	
	}
}