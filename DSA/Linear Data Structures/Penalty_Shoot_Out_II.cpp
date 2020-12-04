/**
 * Author  : BurningTiles
 * Created : 2020-11-30 16:51:53
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
		int n, a=0, b=0, d, i;
		string s;
		cin >> n >> s;
		int n2 = n*2;
		for(i=0; i<n2; i++){
			if(i%2 && s[i]=='1') ++b;
			else if(s[i]=='1') ++a;

			if(a>b){
				d = a-b;
				if(d>n-(i+1)/2) {
					cout << i+1 << endl;
					break;
				}
			} else if(b>a) {
				d = b-a;
				if(d>n-(i/2+1)) {
					cout << i+1 << endl;
					break;
				}
			}
		}
		if(i==n2) cout << n2 << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA02/problems/PSHOT

**/