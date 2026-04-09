#include <iostream>

using namespace std;

int main(){
	int cases, choice, volume = 0, playing = 0;
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
		cin >> choice;
		if(choice==1){
			volume++;
		}
		else if(choice == 2){
			if(volume >= 1){
				volume--;
			}
		}
		else if(choice == 3){
			if(playing == 1)
				playing = 0;
			else
				playing = 1;
		}
		
		if(volume>=3 && playing == 1){
			cout << "Yes" << endl;
			continue;
		}
		else
			cout << "No" << endl;
	}
}