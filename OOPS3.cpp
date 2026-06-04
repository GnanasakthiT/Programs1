#include <iostream>

using namespace std;

class A{
	public:
		A(){
			cout << "A cons" << endl;
		}
		
		~A(){
			cout << "A des" << endl;
		}
};

class B{
public:
	B(){
		cout << "B cons" << endl;
	}
	
	~B(){
		cout << "B des" << endl;
	}
};

class C : public A , public B{
public:
	C(){
		cout << "C cons" << endl;
	}
	
	~C(){
		cout << "C des" << endl;
	}
};

int main(){
	C c;
}