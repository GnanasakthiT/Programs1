#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ofstream myFile("C:/GST/Git/Programs1/text.txt");
	string eachLine;
	
	if(!myFile){
		cout << "Error";
		return 0;
	}
	
	myFile << "Hello" << endl << "Make us proud" << endl;
	
	myFile.close();
	
	ifstream file("C:/GST/Git/Programs1/text.txt", ios::in);
	if(!file){
		cout << "Error";
		return 0;
	}
	
	while(getline(file, eachLine)){
		cout << eachLine << endl;
	}
	
	file.close();	
}