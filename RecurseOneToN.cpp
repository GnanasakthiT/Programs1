#include <iostream>

using namespace std;

void display(int inp);

int main(){
    int n;
    cout << "Enter the end value: ";
    cin >> n;
    display(n);
}

void display(int inp){
    if(inp == 0){
        return;
    }
    display(inp-1);
    cout << inp;
}