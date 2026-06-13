#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
	int person;
	cin >> person;
	int given = 0, temp;	
	map<int,vector<int>> list, result;
	vector<int> empty = {};

	for(int each = 1; each <= person; each++){
		cin >> given;
		for(int ind = 0; ind < given; ind++){
			cin >> temp;
			list[each].push_back(temp);
		}
	}
	
	map<int, int> counter;
	
	for(int each = 1; each <= person; each++){
		for(int ind = 0; ind < list[each].size(); ind++){
			counter[list[each][ind]]++;
			result[list[each][ind]].push_back(each);
		}		
	}
	
	for(int each = 1; each <= person; each++){
		cout << counter[each] << ' ';
		for(int ind = 0; ind < result[each].size(); ind++){
			cout << result[each][ind] << ' ';
		}
		cout << endl;
	}
}