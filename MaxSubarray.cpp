#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums;

    int n, i, temp;
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }

    if(nums.size() == 1){
        return nums[0];
    }

    int sum = 0, currSum = 0, j;

    for(i = 0; i < n; i++){
        currSum = nums[i];
        for(j = i+1; j < n; j++){
            currSum += nums[j];
        }

        if(sum < currSum){
            sum = currSum;
        }
    }

    cout << sum;
    return sum;
}