/**
 * Author  : BurningTiles
 * Created : 2020-11-23 20:02:33
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
		int n, ans=0;
		cin >> n;
		for(int i=1; i<=n; i++){
			int tmp = i*i;
			if(tmp>n)
				break;
			if(tmp%3)
				++ans;
		}
		cout << ans << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/ENNO2020/problems/ENCNOV11

**/