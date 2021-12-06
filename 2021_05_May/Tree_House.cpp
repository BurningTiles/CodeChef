/**
 * Author  : BurningTiles
 * Created : 2021-05-12 14:23:11
 * Link    : BurningTiles.github.io
 * File    : Tree_House.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl '\n'
#define MAX 300005
using namespace std;

vector<int> subval, val, adj[MAX];
vector<pair<int,int>> ch;

void dfs(int now, int lst = -1) {
	for(auto x: adj[now]){
		if(x==lst) continue;
		dfs(x,now);
	}
	ch.clear();
	for(auto x: adj[now]){
		if(x!=lst) ch.emplace_back(subval[x],x);
	}
	sort(rbegin(ch), rend(ch));
	int tok=1;
	for(auto x:ch) val[x.second] = tok++;
	for(auto x: adj[now]) {
		if(x!=lst) subval[now] += val[x] * subval[x];
	}
}

void solve(){
	int N, X;
	cin >> N >> X;
	subval.assign(N,1), val.assign(N,0);
	for(int i=0; i<N; i++)
		vector<int>().swap(adj[i]);
	for(int i=0; i<N-1; i++){
		int u, v;
		cin >> u >> v;
		--u,--v;
		adj[u].emplace_back(v), adj[v].emplace_back(u);
	}
	dfs(0);
	cout << subval[0]%mod*X%mod<<endl;
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
https://www.codechef.com/MAY21C/problems/THOUSES

**/