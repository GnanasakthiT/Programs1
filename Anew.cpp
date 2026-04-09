#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	vector<int> nums;
	for(int i = 0; i < (int) s.size(); i++){
		if(i%2==0)
			nums.push_back(((s[i])-49)+1);
	}
	sort(nums.begin(), nums.end());
	
	int c = 1;
	for(int x : nums){
		cout << x;
		if(c < (int)nums.size())
			cout << '+';
		c++;
		
	}
}