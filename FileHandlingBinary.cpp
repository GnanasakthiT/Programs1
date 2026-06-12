#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

class Stud{
public:
	int roll;
	char name[20];
	char grade;
	int marks;
	
	Stud(){}
	
	Stud(int r, const char* s, char c, int m){
		roll = r;
		strcpy(name, s);
		grade = c;
		marks = m;
	}
	
};

int main(){
	
	ofstream ofile("StudDetails.dat", ios::binary);
	
	if(!ofile){
		cout << "Error in opening the file" << endl;
	}
	
	Stud s1(101, "Arun", 'A', 451);
	
	ofile.write((char*) &s1, sizeof(Stud));
	ofile.close();
	
	ifstream ifile("StudDetails.dat", ios::binary);
	
	if(!ifile){
		cout << "Error" << endl;
	}
	
	Stud s2;
	
	ifile.read((char*) &s2, sizeof(Stud));
	cout << s2.roll;
}