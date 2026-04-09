#include <iostream>
#include <map>

using namespace std;

int main(){
	int emp, dep;
	cin >> emp >> dep;
	
	map<int, int> term1, term2;
	
	int one, two;
	for(int i = 0; i < emp; i++){
		cin >> one >> two;
		term1[one]++;
		term2[two]++;
	}
	
	for(int i = 1; i <= dep; i++){
		cout << term2[i] - term1[i] << endl;
	}
}