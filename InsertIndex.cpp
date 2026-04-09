#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,2,3,5,8};
    int target = 10;
    
     if(nums.front() > target){
            cout << 0;
            return 0;
        }
        if(nums.back() < target){
            cout << nums.size();
            return nums.size();
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                cout << i;
                return i;
            }
            else{
                if(i > 0 && (nums[i-1] < target && nums[i] > target)){
                    cout << i;
                    return i;
                }
            }
        }
        return nums.size();
}

https://copilot.microsoft.com/shares/Cv4caB4kdf2EaEo5TxCqs