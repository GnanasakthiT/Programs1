#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(){
    string input;
    int len;
    cin >> len;
    cin >> input;

    vector<int> gaps;
    int gapCount = 0, required = 0;

    for(int i = 0; i < len; i++){
        if(input[i] == '0'){
            gapCount++;
        }
        else{
            required++;
            gaps.push_back(gapCount);
            gapCount = 0;
        }
    }
    gaps.push_back(gapCount);

    if(gaps.size() == 1){
        cout << (len+2)/3 << endl;
        return;
    }
    
    for(int i = 0; i < gaps.size(); i++){
        if(i == 0 || i == gaps.size()-1){
            required += (gaps[i]+1)/3;
        }
        else{
            required += (gaps[i]/3);
        }
    }

    cout << required << endl;
}


int main(){
    int testCases = 1;
    cin >> testCases;
    while(testCases){
        solve();
        testCases--;
    }
}