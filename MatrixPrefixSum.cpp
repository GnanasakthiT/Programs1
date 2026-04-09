#include <iostream>

using namespace std;

int main(){
    int rows, cols;
    // cout << "Enter the rows: ";
    // cin >> rows;
    // cout << "Enter the cols: ";
    // cin >> cols;
    //1 2 3 4 5 6 7 8 9
    rows = 4, cols = 5;
    int rowmat[rows][cols], colmat[rows][cols], mat[rows][cols], finalmat[rows][cols];

    int range1x, range2x, range1y, range2y;
    cout << '-';
    cin >> range1x;
    cout << '-';
    cin >> range1y;
    cout << '-';
    cin >> range2x;
    cout << '-';
    cin >> range2y;

    int i, j;

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> mat[i][j];
        }
    }
    
    // Row sum
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            if(j == 0){
                rowmat[i][j] = mat[i][j];
            }
            else{
                rowmat[i][j] = (mat[i][j] + rowmat[i][j-1]);
            }

        }
    }

    // Col sum
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            if(i == 0){
                colmat[i][j] = mat[i][j];
            }
            else{
                colmat[i][j] = (mat[i][j] + colmat[i-1][j]);
            }

        }
    }
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            if(i == 0){
                finalmat[i][j] = rowmat[i][j];
            }
            else if(j == 0){
                finalmat[i][j] = colmat[i][j];
            }
            else{
                finalmat[i][j] = rowmat[i][j-1] + colmat [i-1][j] + mat[i][j] + finalmat[i-1][j-1];
            }

        }
    }

    cout << endl;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << rowmat[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << colmat[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << finalmat[i][j] << ' ';
        }
        cout << endl;
    }

    
    int finalsum = finalmat[range2x][range2y] - finalmat[range2x][range1y-1] - finalmat[range1x-1][range2y] 
        + finalmat[range1x-1][range1y-1];
    cout << finalsum;
}