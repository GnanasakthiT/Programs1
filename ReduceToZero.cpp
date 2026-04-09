#include <iostream>

using namespace std;

int main(){
    int num, steps = 0;
    cin >> num;

    while(num!=0){
        steps++;
        if(num%2!=1){
            num--;
        }
        else{
            num/=2;
        }
    }

    cout << steps;
}