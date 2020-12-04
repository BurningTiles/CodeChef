/**
 * Author  : BurningTiles
 * Created : 2020-12-03 16:24:00
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
		ll n, min=1e9, tmp, ans=0;
		cin >> n;
		for(ll i=0; i<n; i++){
			cin >> tmp;
			if(tmp<min)
				min = tmp;
			ans += min;
		}
		cout << ans << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA02/problems/STUPMACH

**/