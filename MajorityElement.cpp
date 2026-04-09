#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> source = {10,12,2,2,2,0,2};
    int max = source[0], min = source[0];
    
    for(int i : source){
        if(max < i){
            max = i;
        }
        if(min > i){
            min = i;
        }
    }

    int amin = abs(min);

    cout << "Min: " << min << endl;
    cout << "amin: " << amin << endl;
    cout << "Max: " << max << endl;


    vector<int> count(amin+max+1);
    cout << "Count size: " << count.size() << endl;
    
    for(int i = 0; i < source.size(); i++){
        count[source[i]]++;
    }
    cout << count.size();
    for(int x : count){
        cout << x << "-";
    }
}