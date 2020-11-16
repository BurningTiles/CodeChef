/**
 * Author  : BurningTiles
 * Created : 2020-11-12 01:15:20
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll tt;
	cin >> tt;
	while(tt--){
		ll n, tmp, ans=0, min=1e15;
		cin >> n;
		while(n--){
			cin >> tmp;
			if(tmp <= min){
				++ans;
				min = tmp;
			}
		}
		cout << ans << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/CARVANS

**/