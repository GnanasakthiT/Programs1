#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;
/*
int main(){
    int n, flag = 0, x;
    cin >> n;
    unordered_set<int> counter;

    while(n){
        cin >> x;
        flag ^= x;
        if(counter.find(x) == counter.end()){
            counter.insert(x);
            cout << 'i';
        }
        else{
            flag ^= x;
            cout << 'e';
        }
        n--;
    cout << "->" << flag << endl;

    }
    return flag;
}
*/

int main(){
    vector<int> nums;
    int n, flag = 0, inp;
    cin >> n;
    while(n){
        cin >> inp;
        nums.push_back(inp);
        n--;
    }

    unordered_map<int,int> counter;

    for(int x : nums){
        counter[x]++;
    }
    
    for(auto x : counter){
        if(x.second == 1){
            cout << x.first;
        }
    }
    // sort(nums.begin(), nums.end());
    // for(int i = 1; i < n - 1; i++){
    //     if(nums[i-1] != nums[i] && nums[i] != nums[i+1]){
    //         cout << nums[i];
    //         return nums[i];
    //     }
    // }
}