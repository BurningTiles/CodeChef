/**
 * Author  : BurningTiles
 * Created : 2021-02-19 14:22:02
 * Link    : BurningTiles.github.io
 * File    : Wormholes.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define ll __int128_t
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

	int n, x, y;
	cin >> n >> x >> y;
	vector<int> s(n), e(n), v(x), w(y);
	
	for(int i=0; i<n; i++) cin >> s[i] >> e[i];
	for(int i=0; i<x; i++) cin >> v[i];
	for(int i=0; i<y; i++) cin >> w[i];

	sort(v.begin(), v.end());
	sort(w.begin(), w.end());

	int ans = mod;
	for(int i=0; i<n; i++){
		x = upper_bound(v.begin(), v.end(), s[i])-v.begin() - 1;
		y = lower_bound(w.begin(), w.end(), e[i])-w.begin();
		if(x>=0 && y<w.size())
			ans = min(ans, w[y] - v[x] + 1);
	}

	cout << ans;

	return 0;
}

/**

Question :
https://www.codechef.com/LRNDSA02/problems/ZCO12002

**/