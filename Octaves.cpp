#include <iostream>

using namespace std;

int main(){
    int frequency, octaves;
    cin >> frequency >> octaves;

    while(octaves!=0){
        frequency *= 2;
        octaves--;
    }
    cout << frequency;
}