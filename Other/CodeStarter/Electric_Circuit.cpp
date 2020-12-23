/**
 * Author  : BurningTiles
 * Created : 2020-12-22 22:00:25
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
		int n, ans=0, g;
		cin >> n;
		int a[n];
		for(auto &x:a){
			cin >> x;
			ans += x;
		}
		g = a[0];
		for(int i=1; i<n; i++)
			g = __gcd(a[i], g);
		
		cout << g << " " << ans/g << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/CSTR2020/problems/ELECTRIC

**/