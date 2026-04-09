#include <iostream>
#include <vector>

using namespace std;

void seperate(vector<int> seq){
	vector<int> final;
	for(int x : seq){
		if(x%2==0){
			final.push_back(x);
		}
	}
	
	for(int x : seq){
		if(x%2){
			final.push_back(x);
		}
	}
	
	for(int x : final)
		cout << x << ' ';
}

int main(){
	int n, temp;
	cin >> n;
	vector<int> arr;
	
	for(int i = 0; i < n; i++){
		cin >> temp;
		arr.push_back(temp);
	}
	
	seperate(arr);
	
}