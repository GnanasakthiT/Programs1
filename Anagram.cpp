#include <iostream>
#include <string>

using namespace std;

int main(){
    int i;
    string s, t;
    cin >> s >> t;

    int counter[26] = {0};

    if(s.size() != t.size()){
        return false;
    }

    for(i = 0; i < s.size(); i++){
        counter[s[i] - 'a']++;
    }

    for(i = 0; i < t.size(); i++){
        counter[t[i] - 'a']--;
    }

    for(i = 0; i < 26; i++){
        if(counter[i] != 0){
            return false;

        }
    }

    return true;
}