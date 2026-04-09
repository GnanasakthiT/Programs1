#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    if(n == 0){
        cout << t;
        return 0;
    }

    vector<int> timing;

    int inp;
    for(int i = 0; i < n; i++){
        cin >> inp;
        timing.push_back(inp);
    }

    int isOpen = 1, isWaiting = 0, isClosed = 0, CurrTime = 0, TotTime = 0, ind = 0;

    while(CurrTime <= TotTime){
        if(isOpen){
            TotTime += (timing[ind] - CurrTime);
            isOpen = 0;
            isWaiting = 1;
            isClosed = 1;
        }
        else if(isClosed){
            isClosed = 0;
        }
        else if(isWaiting){
            isOpen = 1;
            isWaiting = 0;
        }
        ind++;
        CurrTime += timing[ind];
    }
    cout << TotTime;
}