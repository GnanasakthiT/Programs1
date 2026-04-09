#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int i, j, temp;
    for(i = 0, j = n-1; i < j;){
        if((arr[i]%2==0) && (arr[j]%2==0)){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        if(arr[i]%2!=0){
            i++;
        }
        if(arr[j]%2!=0){
            j--;
        }
    }

    for(int x : arr){
        cout << x;
    }
}