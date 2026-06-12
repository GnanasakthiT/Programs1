#include <iostream>
#include <vector>

using namespace std;

int main(){
	int len;
	cin >> len;
	len += 1;
	
	vector<int> man(len, 0), axe(len, 0);
	
	for(int ind = 1; ind < len; ind++){
		cin >> man[ind];
	}
	
	for(int ind = 1; ind < len; ind++){
		cin >> axe[ind];
	}
	
	for(int ind = 1; ind < len; ind++){
		if(ind != axe[man[ind]]){
			cout << "No" << endl;
			return 0;
		}
	}
	
	cout << "Yes" << endl;
}