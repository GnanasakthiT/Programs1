#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Stairs: ";
    cin >> n;
    int count = 1;
    if(n<=1){
        cout << count;
        return count;
    }
    while(n > 1){
        n -= 2;
        count ++;
    }
    cout << count;
    return count;
}