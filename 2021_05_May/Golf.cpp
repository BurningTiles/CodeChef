/**
 * Author  : BurningTiles
 * Created : 2021-05-07 13:51:28
 * Link    : BurningTiles.github.io
 * File    : Golf.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl '\n'
using namespace std;

signed main() {
	if(ifstream("input.txt")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tt;
	cin >> tt;

	while(tt--) {
		int n,x,k;
		cin >> n >> x >> k;
		if(x%k==0 || (n+1)%k == x%k) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/MAY21C/problems/LKDNGOLF

**/