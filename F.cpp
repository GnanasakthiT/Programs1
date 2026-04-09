#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int total;
	cin >> total;
	
	vector<int> skill;
	int temp, count = 0;
	int c1 = 0, c2 = 0, c3 = 0;
	for(int i = 0; i < total; i++){
		cin >> temp;
		skill.push_back(temp);
		switch(temp){
			case 1:
				c1++;
				break;
			case 2:
				c2++;
				break;
			case 3:
				c3++;
				break;
		}
	}
	count = min(c1, c2);
	count = min(count, c3);
	int i = 0, j = 0, k = 0;
	cout << count << endl;
	
	while(i<total && j<total && k<total){
		if(skill[i] != 1) i++;
		if(skill[j] != 2) j++;
		if(skill[k] != 3) k++;
		else{
			cout << i+1 << ' ' << j+1 << ' ' << k+1 << endl;
			i++; j++; k++;
		}
	}
}