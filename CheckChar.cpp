#include <string>
#include <iostream>

using namespace std;

int main(){
    string inp;
    cout << "Enter a word: ";
    cin >> inp;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    for(char x : inp){
        switch(x){
            case 'a':
                a = 1;
                break;
            case 'b':
                b = 1;
                break;
            case 'c':
                c = 1;
                break;
            case 'd':
                d = 1;
                break;
            case 'e':
                e = 1;
                break;
        }
    }
    if(a+b+c+d+e == 5){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}