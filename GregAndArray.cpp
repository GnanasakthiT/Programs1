#include <iostream>
#include <vector>

using namespace std;

int main(){
	long long int len, querries, k;
	cin >> len >> querries >> k;
	
	vector<long long int> arr(len + 2, 0), arrdp(len + 2, 0);
	
	for(int ind = 1; ind <= len; ind++){
		cin >> arr[ind];
	}
	
	vector<vector<int>> querry(querries, vector<int>(3));
	
	int start, end, val;
	for(int q = 0; q < querries; q++){
		cin >> start >> end >> val;
		querry[q][0] = start;
		querry[q][1] = end;
		querry[q][2] = val;
	}	
	
	vector<long long int> qdp(querries + 2, 0);
	
	int kstart, kend;
	for(int operation = 0; operation < k; operation++){
		cin >> kstart >> kend;
		qdp[kstart]++;
		qdp[kend+1]--;		
	}
	
	for(int ind = 1; ind < querries + 2; ind++){
		qdp[ind] += qdp[ind-1];
	}
	

	for(int q = 0; q < querries; q++){
		arrdp[querry[q][0]] += querry[q][2] * qdp[q+1];
		arrdp[querry[q][1]+1] -= querry[q][2] * qdp[q+1];
	}
	
	for(int ind = 1; ind < len + 2; ind++){
		arrdp[ind] += arrdp[ind-1];
	}
	
	for(int ind = 0; ind < len + 2; ind++){
		arr[ind] += arrdp[ind];
	}
	for(int ind = 1; ind < len + 1; ind++){
		cout << arr[ind] << ' ';
	}
}