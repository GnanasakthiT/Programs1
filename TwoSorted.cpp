#include <iostream>

using namespace std;

int main(){
    int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr2[10] = {0,1,2,3,4,5,6,7,8,9};
    int final[20];
    
    int finalind = 0, ind1 = 0, ind2 = 0;

    while(finalind < 20){
        if(arr1[ind1] <= arr2[ind2]){
            final[finalind] = arr1[ind1];
            finalind++;
            ind1++;
        }
        else{
            final[finalind] = arr2[ind2];
            finalind++;
            ind2++;
        }
    }

    for(int t : final){
        cout << t << "-";
    }
}