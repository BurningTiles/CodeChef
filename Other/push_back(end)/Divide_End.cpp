/**
 * Author  : BurningTiles
 * Created : 2020-12-31 21:05:33
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
		while(n){
			if(n%2==0) break;
			n/=10;
		}
		n ? cout << "1\n" : cout << "0\n";
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/PEND2020/problems/ITGUY03

**/