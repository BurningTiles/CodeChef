/**
 * Author  : BurningTiles
 * Created : 2020-12-31 21:24:27
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
		int n, m, tmp;
		map<int,int> x;
		cin >> n >> m;
		for(int i=0; i<n; i++){
			cin >> tmp;
			++x[tmp];
		}
		for(int i=0; i<m; i++){
			cin >> tmp;
			if(x[tmp]) x[tmp] = 0;
			else x[tmp]=1;
		}
		for(auto &a:x)
			if(a.second) cout << a.first << " ";
		cout << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/PEND2020/problems/ITGUY08

**/