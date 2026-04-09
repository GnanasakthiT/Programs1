#include <iostream>
#include <vector>

using namespace std;

vector<int> Dup(){
    vector<int> numbers = {1,2,3,4,5};
    int target = 7;
    vector<int> indices;
    for(int i = 0; i < numbers.size(); i++){
        for(int j = 0; j < numbers.size(); j++){
            if(numbers[i] + numbers[j] == target){
            indices[0] = i + 1;
            indices[1] = j + 1;
            cout << indices[0] << ' ' << indices[1];
            return indices;
            }
        }
    }        
    indices[0] = 1;
    indices[1] = 2;
    cout << indices[0] << ' ' << indices[1];
    return indices;

}

int main(){
    Dup();
}