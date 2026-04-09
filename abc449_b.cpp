#include <iostream>

using namespace std;

int main(){
	int totalRows, totalCols, querries;
	cin >> totalRows >> totalCols >> querries;
	
	for(int i = 0; i < querries; i++){
		int choice, val;
		cin >> choice >> val;
		if(choice == 2){
			cout << val * totalRows << endl;
			totalCols -= val;
		}
		else{
			cout << val * totalCols << endl;
			totalRows -= val;
		}
	}
}