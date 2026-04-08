#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, temp, first;
	cin >> n;
	
	vector<int> encoded;
	for(int i = 0; i < n; i++){
		cin >> temp;
		encoded.push_back(temp);
	}
	cin >> first;
	
	vector<int> original;
	original.push_back(first);
	
	for(int i = 0; i < n; i++){
		original.push_back(original[i]^encoded[i]);
	}
	
	for(int x : original)
		cout << x << ' ';
}