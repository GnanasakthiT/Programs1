#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> bin;

    while(n){
        bin.push_back(n%2);
        n /= 2;
    }

    for(int i = bin.size() - 1; i >= 0; i--){
        cout << bin[i];
    }
}