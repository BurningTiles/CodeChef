/**
 * Author  : BurningTiles
 * Created : 2020-12-12 15:03:56
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
		int n, ans;
		cin >> n;
		for(int i=1; i<=n; i++)
			for(int j=i+1; j<=n; j++)
				ans = max(__gcd(i,j), ans);
		cout << ans << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/SPRT2020/problems/PROBRGN

**/