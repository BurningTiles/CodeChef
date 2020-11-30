/**
 * Author  : BurningTiles
 * Created : 2020-11-29 21:43:46
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
		int n, k, min = 1e9, max = -1e9, tmp;
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> tmp;
			if(tmp < min) min = tmp;
			if(tmp >max) max = tmp;
		}
		cout << max-min+(2*k) << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/FUSN2020/problems/CKWR08

**/