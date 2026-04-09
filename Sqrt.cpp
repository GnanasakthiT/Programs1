#include <string>
#include <iostream>

using namespace std;

int main(){
        double x = 4.0;
        double num = x;
        int i = 1, n = -1;
        while(i < n && n >= 0){
            num *= x;
            i++;            
        }

        while(i > n && n < 0){
            num /= x;
            i--;            
        }

        cout << num;

}