#include <iostream>

using namespace std;

int main(){
    int row, col, i, j;
    cin >> row;
    cin >> col;

    int arr[row][col];
    for(i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    int max[row][col];
    for(i = row-1; i >= 0; i--){
        for(j = col-1; j >= 0; j--){
            if(i == row-1 && j == col-1){
                max[i][j] = arr[i][j];
            }
            else if(i == row-1){
                max[i][j] = max[i][j+1] + arr[i][j];
            }
            else if(j == col-1){
                max[i][j] = max[i+1][j] + arr[i][j];
            }
            else{
                if(max[i+1][j] > max[i][j+1]){
                    max[i][j] = max[i+1][j] + arr[i][j];
                }
                else{
                    max[i][j] = max[i][j+1] + arr[i][j];
                }
            }
        }
    }

    cout << endl;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    
    cout << endl;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << max[i][j] << ' ';
        }
        cout << endl;
    }
}