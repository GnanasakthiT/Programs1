#include <iostream>

using namespace std;

double pow(double val, int p){
	if(p == 0)
		return 1.00;
	if(p == 1)
		return val;
	else{
		double ans = pow(val, p/2);
		if(p%2==0){
			return ans*ans;
		}
		else{
			return val*ans*ans;
		}
	}
}

int main(){
	double input;
	cin >> input;
	int power;
	cin >> power;
	
	if(power>0){
		cout << pow(input, power);
	}
	else{
		cout << 1/pow(input ,power);
	}
}