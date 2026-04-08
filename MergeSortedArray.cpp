#include <iostream>

using namespace std;

int main(){
	int m, n, i, j = 0, k;
	cin >> m >> n;
	int arr1[m+n], arr2[n];
	for(i = 0; i < m; i++){
		cin >> arr1[i];
	}
	
	for(i = m; i <m+n; i++){
		arr1[i] = 0;
	}
		
	for(i = 0; i < m+n; i++){
		if(arr1[i] < arr2[j]){
			k = arr2[i];
			arr2[i] = arr1[i];
			arr1[i] = k;
			
		}
		if(arr1[i] > arr2[j]){
			j++;
		}
	}
}