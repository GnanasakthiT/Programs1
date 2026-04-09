#include <iostream>

using namespace std;

int main(){
    int flag = 0, inp = 0;
    while(1){
        cin >> inp;
        if(inp == -1){
            return 0;
        }
        flag ^= inp;
        cout << "->" << flag << endl;
    }
}