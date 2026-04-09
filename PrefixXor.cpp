#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> pref;
    vector<int> finalArray;
    int n, temp, i, j;
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> temp;
        pref.push_back(temp);
    }

    int result = 0;
    finalArray.push_back(pref[0]);

    for(i = 0; i < pref.size()-1; i++){
        result = pref[i] ^ pref[i+1];
        finalArray.push_back(result);
    }
    
    for(int x : finalArray){
        cout << x << ' ';
    }

}