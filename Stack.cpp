#include <iostream>
#include <deque>

using namespace std;

deque<char> braces;
char pop();
int push(char n);
char top();
int show();

int main(){
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    char c;
    cout << "Enter the values:" << endl;
    for(int i = 0; i < num; i++){
        cin >> c;
        push(c);
    }
    show();
}

int push(char n){
    braces.push_back(n);
    return 0;
}

char pop(){
    char temp = braces.back();
    braces.pop_back();
    return temp;
}

char top(){
    return braces.back();
}

int show(){
    for(char h : braces){
        cout << h;
    }
}