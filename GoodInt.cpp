#include <iostream>

using namespace std;

int checkGood(int num){
    while(num){
        if(num%10 <= ((num/10)%10)){
            return 0;
        }
        num/=10;
    }
    return 1;

}

int main(){
    unsigned long long n;
    int multiplier = 2, temp;
    cin >> n;
    while(n){
        if(n%10 == 0){
            cout << -1;
            return 0;
        }
        if(checkGood(n) == 1){
            cout << n;
            return 0;
        }
        n*=multiplier;
        multiplier++;
    }
    cout << n;
    return 0;

}
