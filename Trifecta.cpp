#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    int horses, min, found, flag = 1, i, j;
    cin >> horses;

    int timing[horses];
    for(i = 0; i < horses; i++){
        cin >> timing[i];
    }

    for(i = 0; i < 3; i++){
        min = timing[0];
        found = 0;
        for(j = 0; j < horses; j++){
            if(min > timing[j]){
                min = timing[j];
                found = j;
            }
        }
        timing[found] = INT_MAX;
        cout << found + 1 << ' ';
    }
}