/**
 * Author  : BurningTiles
 * Created : 2020-11-23 19:23:23
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

	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		a >= b ? cout << "Yes\n" : cout << "No\n";
	}

	return 0;
}

/**

Question :
https://www.codechef.com/ENNO2020/problems/ECNOV09

**/