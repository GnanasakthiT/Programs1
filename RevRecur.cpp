#include <iostream>
#include <string>

using namespace std;

void displayRev(string s){
    if(s.size() == 0){
        return;
    }
    cout << s[s.size()-1];
    s.pop_back();
    displayRev(s);
}

int main(){
    string str;
    cin >> str;

    displayRev(str);
}