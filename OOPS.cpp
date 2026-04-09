#include <iostream>
#include <string>

using namespace std;

class Car{
	public:
		Car();
		Car(string m, int y);
		string model;
		int year;
};

Car :: Car(){
	cout << "Car starts" << endl;
}

Car :: Car(string m, int y){
	model = m;
	year = y;
	cout << "Car parameter set" << endl;
}

class Animal{
	public:
		void sound(string out){
			cout << out << endl;
		}
};

class Cat : public Animal{
	public:
		void sound(){
			cout << "Meow" << endl;
		}
	
};

class Bank{
	private:
		int balance;
	
	public:
		Bank(int amount){
			balance = amount;
		}
	
	friend void showBal(Bank b){
		cout << b.balance << endl;
	}
};

class Person{
	public:
		Person(string name){
			cout << "Hello " << name << endl;
		}
};

class Employee{
	private:
		int salary;
	
	public:
		void setter(int sal){
			salary = sal;
		}
		
		int getter(){
			
			return salary;
		}
	
};

class Vehicles{
	public:
		int number;
	
};

class Bike : public Vehicles{
	public:
		int engineCC;
	
};

class EBike : public Bike{
	public:
		int power;
	
};


class Grandpa{
	public:
		int gdAmount  = 10;
	
};

class Grandma{
	public:
		int gmAmount = 11;
};

class Father : public Grandpa, public Grandma{
	public:
		int fAmount = 12;
	
};

class Mother{
	public:
		int mAmount = 13;
	
};


class Child : public Mother, public Father{
	public:
		int cAmount = 14;
		void display(){
			cout << cAmount << fAmount << mAmount << gdAmount << gmAmount << endl;
		}
};


int main(){
	Animal Dog;
	Dog.sound("barks");
	Cat myCat;
	myCat.sound();
	Person Ravi("Ravi");
	Car BMW("320d", 2020);
	Car Benz();
	Employee Kumar;
	Kumar.setter(568);
	cout << Kumar.getter() << endl;
	Bank myBank(18812);
	showBal(myBank);
	Child Guru;
	Guru.display();
			
}