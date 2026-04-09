#include <iostream>

using namespace std;

void binary(int val);

int main(){
    int num;
    cout << "Enter a value: ";
    cin >> num;
    binary(num);
    
}

void binary(int val){
    if(!val){
        return;
    }
    binary(val/2);
    cout << val%2;
}