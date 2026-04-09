#include <iostream>

using namespace std;

int main(){
	int n, temp;
	cin >> n;
	int arr[n], final[n] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int inde = 0, indo = 1;
	for(int j = 0; j < n; j++){
		if(arr[j]%2==0){
			final[inde] = arr[j];
			inde += 2;
		}
		else{
			final[indo] = arr[j];
			indo += 2;
		}
	}
		
	for(int i = 0; i < n; i++){
		cout << final[i] << ' ';
	}
}