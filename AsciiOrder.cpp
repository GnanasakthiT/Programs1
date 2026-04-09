#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    
    int counter[256] = {0};
    for(char x : str){
        counter[x]++;
    }

    for(int i = 0; i < 256; i++ ){
        if(counter[i] != 0){
            printf("%d - %c\n", counter[i], i);
        }
    }
}