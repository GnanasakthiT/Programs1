#include <iostream>
#include <set>
#include <algorithm>

using namepace std;

void find(int val, int target, int steps){
	if(vis.find(val) == vis.end()){
		return;
	}
	if(val == target){
		fount = true;
		ans = min(steps, ans);
		return;
	}
	if(found)
		return;
	if(val < target)
		return;
	vis.insert(val);
	int fb = 
}

int main{
	
}