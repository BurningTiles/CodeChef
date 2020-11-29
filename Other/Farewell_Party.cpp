/**
 * Author  : BurningTiles
 * Created : 2020-11-23 20:46:33
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

	int tt;
	cin >> tt;
	while(tt--){
		ll x, y, z, t, ans=0;
		cin >> x >> y >> z >> t;
		ll c = x*y + z, m=t%c;
		ans = (t/c)*y;
		ans += m>x*y? y : m/x;
		cout << ans << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/ENNO2020/problems/ECJANC

**/