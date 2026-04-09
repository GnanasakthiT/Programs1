#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0, count = 0;
    while(count < 21){
        sum = 0;
        while(n){
            if(n == 1){
                return true;
            }
            sum += (n%10)*(n%10);
            n/=10;
        }
        n = sum;
        sum++;
    }

    cout << sum;
}