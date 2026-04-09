#include <iostream>

using namespace std;

int main(){
    int size, temp, i, j;
    cin >> size;
    int arr[size];
    for(i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(i = 0, j = size-1;i<j;){
        if(((arr[i]%2!=0) && (arr[j]%2!=0))){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
            i++;
        }
        if(arr[j]%2==0){
            j--;
        }
        if(arr[i]%2==0){
            i++;
        }
    }
    for(int x : arr){
        cout << x << ' ';
    }
}