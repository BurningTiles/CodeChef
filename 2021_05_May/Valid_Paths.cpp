/**
 * Author  : BurningTiles
 * Created : 2021-05-12 19:09:32
 * Link    : BurningTiles.github.io
 * File    : Valid_Paths.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl '\n'
using namespace std;

int ans;
vector<vector<int>> v;
vector<int> dp, tot;

void dfs(int cur, int par) {
	dp[cur] = 1, tot[cur] = 1;
	int sum = 0, cnt = 0;
	for(int i=0; i<v[cur].size(); i++){
		int node = v[cur][i];
		if(node != par){
			dfs(node,cur);
			dp[cur] += ((2*dp[node])%mod), dp[cur]%=mod, cnt++, tot[cur]+=tot[node],tot[cur]%=mod,tot[cur]+=dp[node];
			sum += dp[node];
		}
	}
	for(int i=0; i<v[cur].size(); i++){
		int node = v[cur][i];
		if(node!=par){
			tot[cur] += (dp[node]*((sum-dp[node]+mod)%mod))%mod;
			tot[cur] %= mod;
		}
	}
}

void solve(){
	ans = 0;
	int n;
	cin >> n;
	v.resize(n+1), dp.resize(n+1), tot.resize(n+1);
	for(int i=0; i<n-1; i++){
		int l, r;
		cin >> l >> r;
		v[l].push_back(r), v[r].push_back(l);
	}
	dfs(1,1);
	int ans = tot[1]%mod;
	cout << ans << endl;
	dp.clear(),v.clear(),tot.clear();
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
		solve();
	}

	return 0;
}

/**

Question :
https://www.codechef.com/MAY21C/problems/VPATH

**/