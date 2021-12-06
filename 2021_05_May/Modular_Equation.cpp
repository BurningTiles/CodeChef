/**
 * Author  : BurningTiles
 * Created : 2021-05-09 13:36:51
 * Link    : BurningTiles.github.io
 * File    : Modular_Equation.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define endl '\n'
using namespace std;

void solve(){
	int N, M, ans=0;
	cin >> N >> M;
	vector<int> mod(N+1,1);
	for(int i=2; i<=N; i++){
		int a = M%i;
		ans+=mod[a];
		for(int j=a; j<=N; j+=i) {
			mod[j]++;
		}
	}
	cout << ans << endl;
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

	while(tt--)
		solve();

	return 0;
}

/**

Question :
https://www.codechef.com/MAY21C/problems/MODEQ

**/