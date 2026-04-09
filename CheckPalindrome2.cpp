#include <iostream>

using namespace std;

int main(){
    int arr[26] ={0};
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int flag = 0;

    for(char x : s){
        flag ^= (1<< x - 'a');
    }
    if(flag == 0 || (flag&(flag-1))==0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}