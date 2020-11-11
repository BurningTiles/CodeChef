/**
 * Author  : BurninTiles
 * Created : 2020-11-12 01:29:03
 * Link    : GitHub.com/BurninTiles
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

	ll tt;
	cin >> tt;
	while(tt--){
		ll n, ans=0;
		cin >> n;
		for (ll i = 5; n / i >= 1; i *= 5) 
			ans += n / i;
		cout << ans << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/FCTRL

**/