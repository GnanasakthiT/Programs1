#include <iostream>

using namespace std;

int main(){
	int totalMilk, cans, canCapacity;
	cin >> totalMilk >> canCapacity;
	
	cans = ((totalMilk - 1)/canCapacity) + 1;
	cout << cans;
}