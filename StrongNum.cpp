#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin >> num;
    int temp = num;
    
    int div = 10;
    while(1){
    	if(temp/div==0){
    		break;
    	}
    	else{
    		div*=10;
    	}
    }
    
    int squ = temp*temp;
    if(squ%div == num)
    	cout << "Given number is Automorphic number";
    else
    	cout << "Given numeber is not an Automorphic number";
    return 0;
}
