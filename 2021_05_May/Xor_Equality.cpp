/**
 * Author  : BurningTiles
 * Created : 2021-05-09 08:39:34
 * Link    : BurningTiles.github.io
 * File    : Xor_Equality.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl '\n'
using namespace std;

int power(int y){
	int ans=1, x=2;
	while(y){
		if(y&1)
			ans = (ans*x)%mod;
		y = y>>1;
		x = (x*x)%mod;
	}
	return ans;
}

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
		int n;
		cin >> n;
		cout << power(n-1) << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/MAY21C/problems/XOREQUAL

**/