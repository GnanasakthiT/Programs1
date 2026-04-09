#include <iostream>

using namespace std;

int main(){
    int num, inp, final;
    cout << "Enter the number of jerseys: ";
    cin >> num;
    cout << "Enter the values:" << endl;
    cin >> inp;
    final = inp;
    for(int i = 1; i < num; i++){
        cin >> inp;
        final = final ^ inp;
    }
    cout << "->" << final;
}