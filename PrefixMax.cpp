#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, testCases = 1;

    cin >> testCases;
    while(testCases){
        cin >> n;
        int temp;

        vector<int> arr;

        for(int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());

        cout << arr[n-1] * n << endl;
        testCases--;
    }
}