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

	int n, k, ans=1, tmp;
	cin >> n >> k;
	int a[n];
	vector<pair<int,int>> v;
	
	for(auto &x:a) cin >> x;
	for(int i=n-1; i>=0; i--){
		while(v.size() && v.back().first>=a[i]) v.pop_back();
		if(v.size()){
			ans *= v.back().second - i + 1;
			ans %= mod;
		}
		v.push_back({a[i], i});
	}

	cout << ans;

	return 0;
}

/**

Question :
https://www.codechef.com/LRNDSA02/problems/CHFQUEUE

**/