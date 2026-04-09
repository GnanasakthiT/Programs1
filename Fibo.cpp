#include <iostream>

using namespace std;

int fibo(int num){
    if(num == 1){
        return 1;
    }
    else{
        return fibo(num-1) + fibo(num-2);
    }


}

int main(){
    int n;

}