/**
 * Author  : BurningTiles
 * Created : 2020-11-14 01:20:40
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

int main() {
	if (ifstream("input.txt")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		ll k, d0, d1;
		cin >> k >> d0 >> d1;
		ll s = d0 + d1, x[5]={0};

		if (k == 2) {
			s%3 ? cout << "NO\n" : cout << "YES\n";
			continue;
		}

		for(int i=1, tmp=2; i<5; i++, tmp=(tmp*2)%10)
			x[i] = x[i-1] + (tmp*s)%10;

		ll ans = s + s%10 + x[4]*((k-3)/4) + x[(k-3)%4];
		
		ans%3 ? cout << "NO\n" : cout << "YES\n";
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/MULTHREE

**/