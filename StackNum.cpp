#include <iostream>
#include <stack>

using namespace std;

int main(){
    int num,n;
    stack<int> NumList;
    cin >> n;

    for(int i = 0; i < n; i++){
        if(i == 0){
            cin >> num;
            NumList.push(num);
            continue;
        }
        else{
            cin >> num;
            if(!NumList.empty() && NumList.top() == num){
               NumList.pop();
            }
            else{
                NumList.push(num);
            }
        }

        
    }

    if(NumList.empty()){
        cout << "Empty";
        return 0;
    }
    else{
        cout << "Not empty - ";
        cout << NumList.size();
        
    }

}