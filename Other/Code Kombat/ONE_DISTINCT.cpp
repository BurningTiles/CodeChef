/**
 * Author  : BurningTiles
 * Created : 2020-11-29 22:15:36
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tt;
	cin >> tt;
	while(tt--){
		int n, q, l, r, d;
		cin >> n >> q;
		vector<int> a(n);
		vector<map<int,int>> v;
		map<int,int> m;
		for(int i=0; i<n; i++){
			cin >> a[i];
			++m[a[i]];
			v.push_back(m);
		}
		while(q--){
			cin >> l >> r;
			d = r-l;
			--l; --r;
			bool flag = false;

			if(l>0){
				for(auto &x:v[r])
					if(x.second-v[l-1][x.first] == d) flag = true;
			}
			else {
				for(auto &x:v[r])
					if(x.second == d) flag = true;
			}
			
			flag ? cout << "YES\n" : cout << "NO\n";
		}
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/FUSN2020/problems/CKWR04

**/