#include <iostream>

using namespace std;

int main(){
    int numBottles, numExchange; 
    cin >> numBottles >> numExchange;

    int consumed = numBottles;
    while(numBottles >= numExchange){
        numBottles -= numExchange;
        consumed++;
        numBottles++;
    }
    cout << consumed;
    return consumed;
}