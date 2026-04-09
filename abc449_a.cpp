#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double diameter;
	cin >> diameter;
	diameter/=2.0;
	double area = (double) diameter * diameter * 3.141592653589793;
	cout << setprecision(16) << area;
}