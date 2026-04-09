#include <iostream>
#include <vector>

using namespace std;

int main(){
	int cus, juices;
	cin >> cus >> juices;
	vector<int> counter(juices, 0);
	
	for(int i = 0; i < cus; i++){
		int list;
		cin >> list;
		vector<int> wlist(list);
		for(int j = 0; j < list; j++){
			cin >> wlist[j];
		}
		
		int flag = 0;
		for(int k = 0; k < list; k++){
			if(!(counter[wlist[k]-1])){
				flag = wlist[k];
				counter[flag-1] = 1;
				break;
			}
		}
		cout << flag << endl;
	}
}