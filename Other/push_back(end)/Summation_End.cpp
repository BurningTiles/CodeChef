/**
 * Author  : BurningTiles
 * Created : 2020-12-31 21:32:11
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
		int n, ans=0, tmp;
		cin >> n;
		while(n--){
			cin >> tmp;
			tmp %= 6;
			tmp = tmp ? tmp : 6;
			ans += tmp;
		}
		cout << ans << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/PEND2020/problems/ITGUY00

**/