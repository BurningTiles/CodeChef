/**
 * Author  : BurningTiles
 * Created : 2020-11-14 00:58:44
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

	int t;
	cin >> t;
	while(t--){
		int g;
		cin >> g;
		while(g--){
			int i, n, q;
			cin >> i >> n >> q;
			if(n%2==0){
				cout << n/2 << endl;
				continue;
			}
			if(i==q){
				cout << n/2 << endl;
			}
			else
				cout << n/2+1 << endl;
		}
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/CONFLIP

**/