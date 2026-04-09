#include <iostream>
#include <vector>

using namespace std;

void SubFunc(int index, vector<int>& array, vector<int>& subarray, int len, int SumReq, int CurrSum){
	if(index == len){
		if(SumReq == CurrSum){
			for(int val : subarray){
				cout << val << ' ';
			}
			cout << endl;
		}
		return;
	}
	
	
	subarray.push_back(array[index]);
	CurrSum += array[index];
	SubFunc(index + 1, array, subarray, len, SumReq, CurrSum);
	
	subarray.pop_back();
	CurrSum -= array[index];
	SubFunc(index + 1, array, subarray, len, SumReq, CurrSum);
}

int main(){
	int len;
	cin >> len;
	int SumReq;
	cin >> SumReq;
	
	vector<int> arr(len);
	vector<int> sub;
	
	for(int ind = 0; ind < len; ind++){
		cin >> arr[ind];
	}
	
	
	SubFunc(0, arr, sub, len, SumReq, 0);
}