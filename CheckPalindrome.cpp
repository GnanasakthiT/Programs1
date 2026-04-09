#include <iostream>

using namespace std;

int main(){
    int arr[26] ={0};
    string s;
    cout << "Enter a string: ";
    cin >> s;
    for(char x : s){
        arr[x-'a']++;
    }
    int odd = 0;

    for(int i : arr){
        if(i%2){
            odd++;
        }
    }

    if(odd>1){
        cout << "Palindrome not possible";
        return 0;
    }
    
    cout << "Palindrome possible";
}