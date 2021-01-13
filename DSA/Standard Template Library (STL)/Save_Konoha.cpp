/**
 * Author  : BurningTiles
 * Created : 2021-01-13 22:12:24
 * Link    : BurningTiles.github.io
 * File    : Save_Konoha.cpp
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
		int n, p, tmp, ans=0;
		cin >> n >> p;

		priority_queue <int> q;
		for(int i=0; i<n; i++){
			cin >> tmp;
			q.push(tmp);
		}

		while(p>0){
			++ans;
			tmp = q.top();
			q.pop();
			p -= tmp;
			tmp /= 2;
			if(tmp) q.push(tmp);
			if(!q.size()) break;
		}

		if(q.size()) cout << ans << endl;
		else cout << "Evacuate\n";
	}

	return 0;
}

/**

Question :
https://www.codechef.com/LRNDSA03/problems/SAVKONO

**/