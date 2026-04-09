#include <iostream>
#include <map>

using namespace std;

int main(){
	int month, date;	
	cin >> month >> date;
	
	map<int, int> seasons;
	seasons[1] = 7;
	seasons[3] = 3;
	seasons[5] = 5;
	seasons[7] = 7;
	seasons[9] = 9;
	
	if(seasons[month] == date){
		cout << "Yes" << endl;
		return 0;
	}
	
	cout << "No" << endl;
	return 0;
}