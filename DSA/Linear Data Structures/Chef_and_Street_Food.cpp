/**
 * Author  : BurningTiles
 * Created : 2020-11-30 16:38:29
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
		int n, max = 0, s, p, v, profit;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> s >> p >> v;
			profit = v * (p/(s+1));
			if(profit > max) max = profit; 
		}
		cout << max << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA02/problems/STFOOD

**/