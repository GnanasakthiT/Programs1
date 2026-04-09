#include <string>
#include <iostream>

using namespace std;

int main(){
    string inp;
    cout << "Enter a word: ";
    cin >> inp;
    int flag = 0;
    
    for(int i = 0; i < inp.size(); i++){
        flag = flag | (1<<(inp[i] - 'a'));
    }
    if(flag == ((1<<26)-1)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}