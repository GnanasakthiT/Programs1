#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	
	if(a + b > c && b + c > a && c + a > b){
		double A = acos((b*b + c*c - a*a)/(2*b*c)) * 180 / numbers::pi;
		cout << A;
	}
	else{
		cout << "Invalid triangle" << endl;
	}
}