/**
 * Author  : BurningTiles
 * Created : 2020-12-31 21:53:10
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
		int n, tmp;
		cin >> n;
		for(int i=0; i<n; i++){
			tmp = i;
			for(int j=0; j<i; j++,tmp--)
				cout << tmp;
			for(int j=0; j<n-i; j++)
				cout << j;
			cout << endl;
		}
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/PEND2020/problems/ITGUY59

**/