#include <string>
#include <iostream>
#include <deque>

using namespace std;

int main(){
    string a = "1011";
    string b = "1011";
    deque<char> final;
    int al = a.size(), bl = b.size();
    int i, j, ind = 7;
    char ac, bc, carry = '0';

    i = al-1;
    j = bl-1;

    while(i >= 0 || j >= 0){
        ac = a[i]; bc = b[j];

        if((ac == '0' && bc == '0')&& carry == '0'){
            carry = '0';
            final.push_front('0');
        }
        else if((ac == '1' && bc == '1')&& carry == '1'){
            carry = '1';
            final.push_front('1');
        }
        else if(((ac == '1' && bc == '0') || (ac == '0' && bc == '1')) && carry == '1'){
            carry = '1';
            final.push_front('0');
        }
        else{
            carry = '0';
            final.push_front('1');
        }
        i--;
        j--;
        ind++;
    }
    for(char x : final){
        cout << x;
    }
}