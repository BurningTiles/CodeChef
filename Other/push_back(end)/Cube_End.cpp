/**
 * Author  : BurningTiles
 * Created : 2020-12-31 21:17:06
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
		ll n, ans;
		cin >> n;
		ans = n*n*n;
		for(ll i=1; i<n; i++)
			ans += 2*i*i*i;
		cout << ans << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/PEND2020/problems/ANITGUY4

**/