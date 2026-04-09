#include <iostream>

using namespace std;

int main(){
    int num, bit, checker = 1;

    cout << "Number: ";
    cin >> num;

    cout << "Which bit: ";
    cin >> bit;

    // Left shift
    if((num&(checker<<(bit-1)))){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    // Right shift
    if(((num>>bit-1)&checker)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}