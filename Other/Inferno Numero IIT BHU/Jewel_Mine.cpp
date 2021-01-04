/**
 * Author  : BurningTiles
 * Created : 2021-01-03 20:40:02
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
#define MOD 1000000007
using namespace std;

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tt;
	cin >> tt;
	while(tt--){
		ll n, m, p=0;
		cin >> n >> m;
		for(int i=1; i<=n; i++){
			p += i/2;
			p %= MOD;
		}
		ll ans = pow(m,p);
		ans %= MOD;
		cout << ans << endl;
	}

	return 0;
}

/**

Question : 


**/