/**
 * Author  : BurningTiles
 * Created : 2020-12-07 23:29:45
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
		int n, d, risk=0, norisk=0, ans=0, tmp;
		cin >> n >> d;
		while(n--){
			cin >> tmp;
			if(tmp<10 || tmp>=80) ++risk;
			else ++norisk;
		}
		ans += risk/d + (risk%d ? 1 : 0);
		ans += norisk/d + (norisk%d ? 1 : 0);
		cout << ans << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/DEC20B/problems/VACCINE2

**/