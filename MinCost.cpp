#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums;
    int n, i, temp = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }

    int cost = 0;
    cost += nums[0];
    sort(nums.begin()+1, nums.end());
    cost += nums[1];
    cost += nums[2];
    cout << cost;
    return cost;
}