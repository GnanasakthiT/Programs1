#include <string>
#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    int ind;
    cin >> ind;

    for(int i = 0; i < str.size(); i++){
        cout << str[ind%str.size()];
        ind++;
    }
}