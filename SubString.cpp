#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    string s;
    cin >> s;

    map<char, int> occur;

    int i, j;
    int count[26] = {0};
    for(i = 0; i < s.size(); i++){
        occur[s[i]]++;
        count[s[i] - 'a']++;
    }
    for(int x : count){
        cout << x;
    }

    cout << endl;
    for(auto x : occur){
        cout << x.first << ' ' << x.second;
    }
    cout << endl;


}