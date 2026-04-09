#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums;
    int n, inp, flag = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> inp;
        nums.push_back(inp);
    }
    sort(nums.begin(), nums.end());
    for(int x : nums){
        cout << x << ' ';
    }
    cout << endl;

    for(int i = 0; i < n-1; i++){
        if(nums[i] + 1 != nums[i+1]){
            cout  << nums[i] + 1;
            return nums[i] + 1;
        }

    }
    cout << nums[n-1] + 1;
    return  nums[n-1] + 1;
        
}