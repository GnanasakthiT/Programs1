#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main(){
    unordered_set<int> log;
    vector<int> source = {1,2,3,1,4,5,6,7,8,9,2,5};

    for(int x : source){
        if(log.find(x) != log.end()){
            cout << "Present" << x << endl;
        }
        else{
            cout << "Absent" << x << endl;
            log.insert(x);
        }
    }
}