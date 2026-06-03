#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long int a, b;
	cin >> a >> b;
	
	long long int c = 0;
	
	long long int lena = floor(log10(a)) + 1;
	long long int lenb = floor(log10(b)) + 1;
	long long int ta = lena, tb = lenb;
	
	long long int x = 0, y = 0;
	
	
	while(lena--){
		x *= 10;
		x += a%10;
		a /= 10;
	}
	
	while(lenb--){
		y *= 10;
		y += b%10;
		b /= 10;
	}
	
	while(ta--){
		c *= 10;
		c += x%10;
		x /= 10;
	}
	
	while(tb--){
		c *= 10;
		c += y%10;
		y /= 10;
	}
	
	long long int res = c * c;
	cout << res << endl;	
}