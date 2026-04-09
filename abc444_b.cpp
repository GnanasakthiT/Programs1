#include <iostream>

using namespace std;

int digSum(int num){
	if(num<10)
		return num;
	int sum = 0;
	while(num){
		sum += num%10;
		num/=10;
	}
	return sum;
}

int main(){
	int n, k;
	cin >> n >> k;
	int val, count = 0;
	for(int i = 1; i <= n; i++){
		val = digSum(i);
		if(val == k)
			count++;
	}
	cout << count;
}