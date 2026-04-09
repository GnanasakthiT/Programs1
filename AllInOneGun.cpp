#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long int

void solve(){
	int N;
	ll h, k , sum = 0;
	cin >> N >> h >> k;
	vector<int> arr(N+1,0);
	for(int i = 1; i <= N; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	
	ll rr = (h-1)/sum;
	ll ans = rr * (N+k);
	h = h - (rr*sum);
	int lmin = 1000000005;
	vector<int> rb(N+1, 0);
	for(int i = N-1; i >=1; i--){
		rb[i] = max(rb[i+1], arr[i+1]);
	}
	
	
	sum = 0;
	for(int i = 1; i <= N; i++){
		sum += arr[i];
		lmin = min(lmin, arr[i]);
		if(sum>=h || (sum-lmin+rb[i]) >= h){
			ans+= i;
			break;
		}
	}
	cout << ans << endl;
}


int main(){
	int t;
	cin >> t;
	while(t-->0){
		solve();
	}
}