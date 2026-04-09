#include <string>
#include <iostream>

using namespace std;

int main(){
    string s = "  l ";
    int flag = 0, len = s.length(), count = 0;
    for(int i = len-1; i >= 0; i--){
        if(flag == 0 && s[i] == ' '){
            continue;
        }
        else if((flag == 1 && s[i] == ' ')){
            cout << count;
            return count;
        }
        else{
            count++;
            flag = 1;
        }
    }
    cout << count;
    return count;
}