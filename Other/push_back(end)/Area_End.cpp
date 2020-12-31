/**
 * Author  : BurningTiles
 * Created : 2020-12-31 21:37:47
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
		int n;
		cin >> n;
		ll a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		sort(a, a+n);
		cout << a[n-1]*a[n-2] << " " << a[0]*a[1] << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/PEND2020/problems/ANITGUY7

**/