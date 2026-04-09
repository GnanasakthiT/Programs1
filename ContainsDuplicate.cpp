#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<int> log;
    vector<int> nums = {1,2,3,1};
    int n, temp;

    for(int x : nums){
        if(log.find(x) != log.end()){
            cout << "Duplicate found";
            return true;
        }
        else{
            log.insert(x);

        }
    }
    cout << "No duplicates found";
    return false;

    // for(i = 0; i < nums.size(); i++){
    //     for(j = i + 1; j < nums.size(); j++){
    //         if(nums[i] == nums[j]){
    //             return true;
    //         }
    //     }
    // }
    // return false;
}