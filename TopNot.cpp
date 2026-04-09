#include <iostream>

using namespace std;

// int FirstMax(int array[], int size){
//     int temp = array[0];
//     for(int i = 1; i < size; i++){
//         if(temp < array[i]){
//             temp = array[i];
//         }
//     }
//     return temp;
// }

// int SecondMax(int array[], int size, int fmax){
//     int temp = array[0];
//     for(int i = 1; i < size; i++){
//         if(temp < array[i] && temp != fmax){
//             temp = array[i];
//         }
//     }
//     return temp;
// }

int main(){
    int row, col, i, j, k;
    cin >> row;
    cin >> col;

    int arr[row][col];
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    int fmaxx, fmaxy, smaxx, smaxy;
    int final[row][col];

    for(i = 0; i < row; i ++){
            fmaxx = 1; fmaxy = 1;
            smaxx = 1; smaxy = 1;

        if(i){
            for(j = 0; j < col; j++){
                {
                    if(final[fmaxx-1][fmaxy] < final[i-1][j]){
                        fmaxx = i;
                        fmaxy = j;
                    }
                    if(final[smaxx-1][smaxy] < final[i-1][j] && fmaxy != smaxy){
                        smaxx = i;
                        smaxy = j;
                    }
                }
            }
        }

        for(j = 0; j < col; j++){
            if(i == 0){
                final[i][j]  = arr[i][j];
            }
            else{
                if(j == fmaxy){
                    final[i][j] = arr[i][j] + final[smaxx][smaxy];
                }
                else{
                    final[i][j] = arr[i][j] + final[fmaxx][fmaxy];
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
            cout << final[i][j] << ' ';
        }
        cout << endl;
    }

}