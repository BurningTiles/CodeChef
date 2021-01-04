/**
 * Author  : BurningTiles
 * Created : 2021-01-03 20:58:30
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

	ll n, tmp=0;
	cin >> n;
	for(ll i=0; i<n; i++){
		tmp += n;
		cout << tmp << " ";
	}
	
	return 0;
}

/**

Question : 


**/