/**
 * Author  : BurningTiles
 * Created : 2020-12-31 21:34:35
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
		int n, sum = 0;
		cin >> n;
		int tmp = n;
		while(tmp){
			sum += tmp%10;
			tmp/=10;
		}
		n%sum ? cout << "No\n" : cout << "Yes\n";
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/PEND2020/problems/ANITGUY9

**/