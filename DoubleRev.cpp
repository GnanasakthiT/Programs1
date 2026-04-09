#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int original = num;
    int rev = 0;
    while(num){
        rev *= 10;
        rev += num%10;
        num/=10;
    }

    int drev = 0;
    while(rev){
        drev *= 10;
        drev += rev%10;
        rev/=10;
    }
    cout << drev << endl;

    if(drev == original){
        return true;
    }
    return false;
        
}