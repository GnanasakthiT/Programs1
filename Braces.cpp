#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<char> braces;

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int f1 = 0, f2 = 0, f3 = 0;
    if(s.length() % 2 != 0){
        cout << "Invalid";
        return false;
    }
    char temp;
    for(int i = 0; i < s.length(); i++){
        temp = s[i];

        switch (temp)
        {
        case '(':
            f1++;
            braces.push(s[i]);
            break;

        case '{':
            f2++;
            braces.push(s[i]);
            break;

        case '[':
            f3++;
            braces.push(s[i]);
            break;
            
        case ')':
            f1--;
            if(braces.empty()){
                cout << "Invalid";
                return false;
            }
            if(braces.top() == '('){
                braces.pop();
            }
            else{
                cout << "Invalid";
                return false;
            }
            break;

        case '}':
            f2--;
            if(braces.empty()){
                cout << "Invalid";
                return false;
            }
            if(braces.top() == '{'){
                braces.pop();
            }
            else{
                cout << "Invalid";
                return false;
            }
            break;

        case ']':
            f3--;
            if(braces.empty()){
                cout << "Invalid";
                return false;
            }
            if(braces.top() == '['){
                braces.pop();
            }
            else{
                cout << "Invalid";
                return false;
                
            }
            break;
        }
    }

    if(f1 != 0 || f2 != 0 || f3 != 0){
        cout << "Invalid";
        return false;
    }
    cout << "Valid";
    return true;
}

