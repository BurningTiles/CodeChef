/**
 * Author  : BurningTiles
 * Created : 2021-01-08 18:33:16
 * Link    : BurningTiles.github.io
 * File    : Fair_Elections.cpp
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

	int tt;
	cin >> tt;

	while(tt--) {
		int n, m, john=0, jack=0;
		cin >> n >> m;
		int a[n], b[m];

		for(auto &x:a) {
			cin >> x;
			john += x;
		}
		for(auto &x:b){
			cin >> x;
			jack += x;
		}

		sort(a, a+n);
		sort(b, b+m);

		int i=0, j=m-1;
		while(john<=jack && i<n && j>-1){
			john -= a[i];
			john += b[j];
			jack -= b[j];
			jack += a[i];
			++i;
			--j;
		}

		cout << (john>jack ? i : -1) << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/JAN21C/problems/FAIRELCT

**/