/**
 * Author  : BurningTiles
 * Created : 2021-01-08 18:12:39
 * Link    : BurningTiles.github.io
 * File    : Chef_and_Division_3.cpp
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
		int n, k, d, sum=0, tmp, ans;
		cin >> n >> k >> d;

		while(n--){
			cin >> tmp;
			sum += tmp;
		}

		cout << (sum>=k*d ? d : sum/k) << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/JAN21C/problems/DIVTHREE

**/