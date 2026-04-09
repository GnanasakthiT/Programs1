#include <iostream>

using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    int arrSize, heLikes, x, i, j, sum;

    for(i = 0; i < testCases; i++){
        sum = 0;
        cin >> arrSize;
        cin >> heLikes;
        cin >> x;
        int arr[arrSize];
        for(j = 0; j < arrSize; j++){
            cin >> arr[j];
            sum += arr[j];
        }

        while(sum < heLikes){
            sum += x;
        }

        if(sum == heLikes){
            cout << "Yes"  << endl;
        }
        else if(sum > heLikes){
            cout << "No"  << endl;
        }

    }
}