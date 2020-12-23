/**
 * Author  : BurningTiles
 * Created : 2020-12-22 21:25:03
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

	int n, x[1001]={0}, tmp;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> tmp;
		++x[tmp];
	}
	for(int i=0; i<=n; i++){
		cin >> tmp;
		if(x[tmp]) --x[tmp];
		else cout << tmp;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/CSTR2020/problems/AMONGUS

**/