#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

ll hcf(ll x, ll y){
	if(y==0)
		return x;
	return hcf(y, x%y);
}

ll lcm(ll a, ll b){
	return ((a*b)/hcf(a,b));
}

void solve(){
	ll a, b, c, totalDays;
	cin >> a >> b >> c >> totalDays;
	
	ll onlya, onlyb, onlyc, aandb, aandc, bandc, totala, totalb, totalc;
	ll abc, lcmab, lcmac, lcmbc, lcmabc;
	ll parta = 0, partb = 0, partc = 0;
	
	totala = totalDays/a;
	totalb = totalDays/b;
	totalc = totalDays/c;
	
	ll temp = lcm(a,b);
	lcmabc =  lcm(temp, c);
	lcmab = lcm(a, b);
	lcmac =  lcm(a, c);
	lcmbc =  lcm(b, c);

	abc = totalDays/lcmabc;	
	aandb = totalDays/lcmab - abc;
	bandc = totalDays/lcmbc - abc;
	aandc = totalDays/lcmac - abc;

	
	onlya = totala - abc - aandb - aandc;
	onlyb = totalb - abc - aandb - bandc;
	onlyc = totalc - abc - aandc - bandc;
	
	parta = (onlya * 6) + ((aandb + aandc) * 3) + (abc * 2);
	partb = (onlyb * 6) + ((aandb + bandc) * 3) + (abc * 2);
	partc = (onlyc * 6) + ((aandc + bandc) * 3) + (abc * 2);
	
	cout << parta << ' ' << partb << ' ' << partc << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}