/**
 * Author  : BurningTiles
 * Created : 2020-12-07 23:38:53
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
		ll a, b, ans=0, aeven, aodd, beven, bodd;
		cin >> a >> b;
		aeven = a/2;
		aodd = a-aeven;
		beven = b/2;
		bodd = b-beven;
		ans += aeven*beven;
		ans += aodd*bodd;
		cout << ans << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/DEC20B/problems/EVENPSUM

**/