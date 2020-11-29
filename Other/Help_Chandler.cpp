/**
 * Author  : BurningTiles
 * Created : 2020-11-23 19:29:07
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
		int n, l, r, min=0, max=0, t, c=0;
		cin >> n >> l >> r;
		t=pow(2,l-1);
		for(int i=0; i<n; i++){
			min += t;
			++c;
			if(c<l){
				t /= 2;
			}
		}
		cout << min << " ";
		t=1, c=0;
		for(int i=0; i<n; i++){
			max += t;
			++c;
			if(c<r){
				t *= 2;
			}
		}
		cout << max << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/ENNO2020/problems/ENCNOV

**/