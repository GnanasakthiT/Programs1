#include <iostream>
#include <string>
#include <vector>

using namespace std;

int contains(string s, char c){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == c){
            return 1;
        }
    }
    return 0;
}

int main(){
    int takaLen, aokiLen, numOfWords, i, j;
    string takaStr, aokiStr;

    cin >> takaLen;
    cin >> aokiLen;

    cin >> takaStr;
    cin >> aokiStr;

    cin >> numOfWords;
    string w[numOfWords];
    string str;

    for(i = 0; i < numOfWords; i++){
        cin >> w[i];
    }

    cout << endl;
    int count;

    for(i = 0; i < numOfWords; i++){
            str = w[i];
            count = 0;
        for(j = 0; j < str.size(); j++){
            if(contains(takaStr, str[j])==1){
                count++;
            }
            if(contains(aokiStr, str[j])==1){
                count--;
            }
        }

        if(count > 0){
            cout << "Takahashi" << endl;
        }
        else if(count == 0){
            cout << "Unknown" << endl;
        }
        else{
            cout << "Aoki" << endl;
        }
    }

}