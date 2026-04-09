#include <iostream>

using namespace std;

int main(){
    int row, col, i, j;
    cin >> row;
    cin >> col;
    
    int arr[row][col];
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;
    int max[row][col];
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            if(i == 0 && j == 0){
                max[i][j] = arr[i][j];
            }
            else if(i == 0){
                max[i][j] = max[i][j-1] + arr[i][j];
            }
            else if(j == 0){
                max[i][j] = max[i-1][j] + arr[i][j];
            }
            else{
                if(max[i-1][j] > max[i][j-1]){
                    max[i][j] = max[i-1][j] + arr[i][j];
                }
                else{
                    max[i][j] = max[i][j-1] + arr[i][j];
                }
            }
        }
    }

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