#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> num1;
	vector<int> num2;
	int s1, s2, temp;
	cin >> s1;
	
	for(int k = 0; k < s1; k++){
		cin >> temp;
		num1.push_back(temp);
	}
	
	cin >> s2;
	for(int k = 0; k < s2; k++){
		cin >> temp;
		num2.push_back(temp);
	}
	
	
	vector<int> final;
	int i = 0, j = 0;
	
	while(i < num1.size() || j < num2.size()){
		if(num1[i] < num2[j]){
			final.push_back(num1[i]);
			i++;
		}
		else if(num1[i] > num2[j]){
			final.push_back(num2[j]);
			j++;
		}
	}
	
	for(int x : final)
		cout << x << ' ';
	
	double median;
	if(final.size()%2==0)
		median = (double)( final[(final.size()-1)/2] + final[(final.size()+1)/2]/2.00);
	else
		median = (double) final[final.size()/2];
	cout << endl;
	cout << median;
	
	return 0;

}