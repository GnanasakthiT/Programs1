#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ci = 0;
    int sarr[n+1];
    sarr[0] = 0;
    for(int i = 1; i <= n; i++){
        sarr[i] = sarr[i-1] + arr[i-1];
    }

    for(int x : arr){
        cout << x << ' ';
    }
    cout << endl;
    for(int x : sarr){
        cout << x << ' ';
    }
    cout << endl;

    int start, end;
    cout << "Enter the starting index: ";
    cin >> start;
    cout << "Enter the ending index: ";
    cin >> end;

    cout << (sarr[end+1] - sarr[start]);
}
