#include <iostream>

using namespace std;

void hex(int val);

int main(){
    int num;
    cout << "Enter a value: ";
    cin >> num;
    hex(num);
    
}

void hex(int val){
    if(!val){
        return;
    }
    hex(val/16);
    printf("%X", val%16);
}