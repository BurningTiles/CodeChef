/**
 * Author  : BurningTiles
 * Created : 2021-05-09 06:09:55
 * Link    : BurningTiles.github.io
 * File    : Solubility.cpp
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
		int x,a,b;
		cin >> x >> a >> b;
		cout << (a+(100-x)*b)*10 << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/MAY21C/problems/SOLBLTY

**/