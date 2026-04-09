#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int years = 0, eats = n;

    while(eats < k){
        years++;
        n++;
        eats += n;
    }

    cout << years;
}