#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void findComp(int inp){
	vector<int> binary;
	while(inp){
		binary.push_back(inp%2);
		inp/=2;
		
	}
	
	int result = 0, ind = 0;
	for(int x : binary){
		if(!x){
			result += pow(2,ind);
		}
		ind++;
	}
	cout << result;
}

int main(){
	int num;
	cin >> num;
	findComp(num);
}