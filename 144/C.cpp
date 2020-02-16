#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ll N , ans;    
	ans = 1e18;
	cin >> N;
	for (ll i=1;i*i<=N;i++) {
		if (N%i==0) {
			ans=min(ans,i+N/i-2);
		}
	}
    cout << ans << endl;
	return 0;
}