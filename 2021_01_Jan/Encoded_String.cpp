/**
 * Author  : BurningTiles
 * Created : 2021-01-08 18:19:58
 * Link    : BurningTiles.github.io
 * File    : Encoded_String.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define ll __int128_t
#define mod 1000000007
#define endl '\n'
using namespace std;

signed main() {
	if(ifstream("input.txt")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		string s;
		cin >> n >> s;

		for(int i=0; i<n; i+=4)
			cout << char((s[i]-'0')*8 + (s[i+1]-'0')*4 + (s[i+2]-'0')*2 + (s[i+3]-'0') + 97);
			
		cout << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/JAN21C/problems/DECODEIT

**/