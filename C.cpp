#include <iostream>
#include <vector>

using namespace std;

int main(){
	int cases;
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
		vector<int> values;
		int num, counter = 0, mul = 1;
		cin >> num;
		
		while(num){
			if(num%10 != 0){
				counter++;
				values.push_back((num%10)*mul);
				
			}
			mul *= 10;
			num/= 10;
		}
		cout << counter << endl;
		for(int i = values.size()-1; i >= 0; i--)
			cout << values[i] <<  ' ';
		cout << endl;
	}
}