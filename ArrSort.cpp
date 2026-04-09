#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {5,2,1,3,6,82,2,2,5,8,5,56,4};
    sort(arr, arr+14);
    for(int x : arr)
        cout << x << ' ';
}