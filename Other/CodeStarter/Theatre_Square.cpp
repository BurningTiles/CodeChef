/**
 * Author  : BurningTiles
 * Created : 2020-12-22 21:42:30
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
	
	double n, m, a, ans=1;
	cin >> n >> m >> a;
	
	cout << ceil(n/a)*ceil(m/a);

	return 0;
}

/**

Question : 
https://www.codechef.com/CSTR2020/problems/MALLTILE

**/