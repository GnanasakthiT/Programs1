#include <iostream>
#include <vector>

using namespace std;

int main(){
	int len, q;
	cin >> len >> q;
	
	vector<int> arr(len, 0);
	
	int a, b;
	for(int ind = 0; ind < q; ind++){
		cin >> a >> b;
		if(a == 1){
			arr[b-1]++;
			
			int counter = 0;
			for(int ind = 0; ind < len; ind++){
				if(arr[ind]) counter++;
			}
			if(counter == len){
				for(int ind = 0; ind < len; ind++){
					arr[ind]--;
				}
			}
		}
		else{
			int counter = 0;
			for(int ind = 0; ind < len; ind++){
				if(arr[ind] >= b){
					counter++;
				}
			}
			
			cout << counter << endl;
		}
	}
}