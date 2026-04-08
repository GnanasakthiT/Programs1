#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	
	int FirstLen = s1.size(), SecondLen = s2.size(), MaxVal = 0;
	vector<vector<int>> grid(FirstLen, (vector<int>(SecondLen, 0)));
	
	for(int index1 = 0; index1 < FirstLen; index1++){
		for(int index2 = 0; index2 < SecondLen; index2++){
			if(s1[index1] == s2[index2]){
				if(index1>0 && index2>0 && grid[index1-1][index2-1]){
					grid[index1][index2] = grid[index1-1][index2-1] + 1;
					MaxVal = grid[index1][index2];
				}
				else{
					grid[index1][index2] = 1;
				}
			}
		}
	}
	cout << MaxVal;
}