#include <iostream>

using namespace std;

int main(){
    int inp;
    cout << "Enter the value: ";
    cin >> inp;

    if(inp&(inp-1)){ //Special property of power of two
        cout << "No";
    }
    else{
        cout << "Yes";
    }
}