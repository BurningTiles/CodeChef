/**
 * Author  : BurningTiles
 * Created : 2021-01-11 22:54:57
 * Link    : BurningTiles.github.io
 * File    : Not_All_Flavours.cpp
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
		int n, k, ans=0, tmp=0;
		cin >> n >> k;
		int a[n], flag[k+1]={0};
		for(auto &x:a) cin >> x;
		int i=0, j=0; 

		while(i<n && i>=j){
			if(flag[a[i]]) {
				++flag[a[i]];
				++i;
			}
			else {
				if(tmp==k-1) {
					--flag[a[j]];
					if(!flag[a[j]]) --tmp;
					++j;
				}
				else {
					if(!flag[a[i]]) ++tmp;
					++flag[a[i]];
					++i;
				}
			}
			ans = max(ans, i-j);
		}

		cout << ans << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/LRNDSA02/problems/NOTALLFL

**/