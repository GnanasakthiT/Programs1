#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define M 900000
vector<string> ystr(M+1);
vector<int> ysum(M+1);

void init(){
	for(int i = 0; i <= M; i++){
		string s = "";
		int sum = 0;
		int isum = i;
		while(1){
			string t = to_string(isum);
			isum = 0;
			s += t;
			for(char ch : t){
				isum += ch - '0';
			}
			sum += isum;
			
			if(t.size() == 1){
				break;
			}
		}
		ystr[i] = s;
		ysum[i] = sum;
	}	
}

void solve(){
	string s;
	cin >> s;
	
	if(s.size() == 1){
		cout << s << endl;
		return;
	}
	int sum = 0;
	vector<int> dcnt(10,0);
	for(char ch : s){
		int digit = ch - '0';
		sum += digit;
		dcnt[digit]++;
	}
	for(int prey = 0; prey <= M; prey++){
		if((sum - ysum[prey]) == prey){
			vector<int> ydc(10,0);
			for(char ch : ystr[prey]){
				ydc[ch-'0']++;
			}
			bool ok = true;
			for(int dig = 0; dig <= 9; dig++){
				if(dcnt[dig] < ydc[dig]){
					ok = false;
					break;
				}
			}
			if(ok){
				for(int dig = 9; dig >= 0; dig--){
					for(int cnt = 1; cnt <= dcnt[dig] - ydc[dig]; cnt++){
						cout << dig;
					}
				}
				cout << ystr[prey] << endl;
				return;

			}
		}
	}
}

int main(){
	init();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}