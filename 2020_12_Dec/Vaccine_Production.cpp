/**
 * Author  : BurningTiles
 * Created : 2020-12-07 23:03:03
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

	ll d1, v1, d2, v2, p, ans=0;
	cin >> d1 >> v1 >> d2 >> v2 >> p;

	ll i=1;
	while(true){
		if(i>=d1) ans += v1;
		if(i>=d2) ans += v2;
		if(ans>=p){
			cout << i;
			return 0;
		}
		++i;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/DEC20B/problems/VACCINE1

**/