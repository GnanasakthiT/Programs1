#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int books, time, temp, count = 0;
	cin >> books;
	cin >> time;
	
	vector<int> eachTime;
	for(int i = 0; i < books; i++){
		cin >> temp;
		eachTime.push_back(temp);
	}
	
	sort(eachTime.begin(), eachTime.end());
	
	int l = 0, r = 0;
	int sum = 0;
	while(r<(int)eachTime.size()){
		if(sum == 5){
			count = max(count, r-l+1);
			sum = 0;
			l = r;
		}
		sum += eachTime[r];
		r++;
	}
	
	cout << count;
}