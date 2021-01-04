/**
 * Author  : BurningTiles
 * Created : 2021-01-03 21:38:22
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, m;
	cin >> n >> m;
	ll a[n];
	for(ll i=0; i<n; i++)
		cin >> a[i];
	while(m--){
		ll c,x,y;
		cin >> c >> x >> y;
		if(c==1){
			a[x-1] = y;
		}
		else{
			ll mul=1, ans=1;
			for(ll i=x-1; i<y; i++)
				mul *= a[i];
			for(ll i=2; i<mul; i++)
				if(__gcd(i,mul)==1) ++ans;
			//cout << mul << " ";
			cout << ans << endl;
		}
	}
	
	return 0;
}

/**

Question : 


**/