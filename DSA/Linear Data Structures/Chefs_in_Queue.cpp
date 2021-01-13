/**
 * Author  : BurningTiles
 * Created : 2021-01-13 16:46:51
 * Link    : BurningTiles.github.io
 * File    : Chefs_in_Queue.cpp
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

	int n, k, ans=1;
	cin >> n >> k;
	
	int a[n], flag[k+1]={0}, ff[n];
	for(int i=0; i<n; i++) cin >> a[i];

	for(int i=n-1; i>=0; i--) {
		flag[a[i]] = i;
		--a[i];
		while(a[i]>0 && !flag[a[i]]) --a[i];
		if(a[i]) ff[i] = a[i]-i+2;
		else ff[i] = 1;
	}

	for(int i=0; i<n; i++){
		ans = (ans*ff[i]) % mod;
	}

	cout << ans;

	return 0;
}

/**

Question :
https://www.codechef.com/LRNDSA02/problems/CHFQUEUE

**/