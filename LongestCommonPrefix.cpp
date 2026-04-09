#include <iostream>
#include <string>
#include <vector>

using namespace std;

string CommonPrefix(vector<string>& strs){
    char ch;
    string prefix = "";
    int i, j, min, check;

    if(strs.size() == 0){
        cout << 0 << endl;
        return prefix;
    }
    if(strs.size() == 1){
        cout << strs[0] << endl;
        prefix = strs[0];
        return prefix;
    }
    else{
        min = strs[0].size();
        for(i = 1; i < strs.size(); i++){
            check = strs[i].size();
            if(check < min){
                min = check;
            }
        }

        for(i = 0; j < strs.size()-1; i++){
            ch = strs[i][0];
            for(j = 0; j < min; j++){
                if(ch != strs[j][i]){
                    
                }
            }
        }
    }
}

int main(){
    vector<string> str = {"flower", "flow", "flight"};
    string final = CommonPrefix(str);
}