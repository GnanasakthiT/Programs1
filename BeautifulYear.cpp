#include <iostream>
#include <map>

using namespace std;

int isBeauty(int n){
	map<int,int> counter;
	
	while(n){
		counter[n%10]++;
		n/=10;
	}
	
	for(auto val : counter){
		if(val.second > 1){
			return isBeauty(n++);
		}
	}
	return n;	
}

int main(){
	int year;
	cin >> year;
	cout << isBeauty(year);
	
}