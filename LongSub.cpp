#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int count1 = 0, count0 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            count0++;
        }
        else{
            count1++;
        }
    }
    int min = (count0<count1)? count0 : count1;


    for(int i = 0, j = 0, k = 0; k < s.size(); k++){
        if(s[k] == '0' && i < min){
            i++;
            cout << s[k];
        }
        if(s[k] == '1' && j < min){
            j++;
            cout << s[k];
        }
    }
}