#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 2;

    int low = 0, high = nums.size() - 1;

    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            cout << mid;
            return mid;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << -1;
    return -1;
}