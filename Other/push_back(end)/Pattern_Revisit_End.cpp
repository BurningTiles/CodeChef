/**
 * Author  : BurningTiles
 * Created : 2020-12-31 21:48:32
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
		n = (n+1)/2;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=i; j++)
				cout << (j==1 || j==i ? "*" : " ");
			cout << endl;
		}
		for(int i=n-1; i>0; i--){
			for(int j=1; j<=i; j++)
				cout << (j==1 || j==i ? "*" : " ");
			cout << endl;
		}
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/PEND2020/problems/ANITGUY6

**/