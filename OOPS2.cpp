#include <iostream>
#include <string>

using namespace std;

class Car{
public:
	static int count;
	string name;
	
	Car(string s){
		name = s;
		count++;
	}
	
	static void getc(){
		cout << count << endl;
	}
};

int Car::count = 0;

int main(){
	Car c1("BMW");
	Car c2("Lexus");
	Car::getc();
	
}