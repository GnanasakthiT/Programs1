#include <iostream>
#include <vector>

using namespace std;

int main(){
    int testCases, n;

    cin >> testCases;
    while(testCases){
        cin >> n;
        if(n == 2){
            cout << '2' << endl;
        }
        else if(n == 3){
            cout << '3' << endl;
        }
        else if(n%2==0){
            cout << '0' << endl;
        }
        else{
            cout << '1' << endl;
        }
        testCases--;
    }
    return 0;
}