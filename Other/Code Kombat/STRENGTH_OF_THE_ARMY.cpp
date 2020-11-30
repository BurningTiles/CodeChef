/**
 * Author  : BurningTiles
 * Created : 2020-11-29 21:46:24
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
		int n, x, y;
		double ans = 0;
		cin >> n >> x >> y;
		vector<int> a(n);
		for(auto &x:a) cin >> x;
		sort(a.rbegin(), a.rend());

		for(int i=0; i<n; i+=x){
			if(i+x>n) break;
			double tmp = 0;
			for(int j=i; j<i+x; j++){
				tmp += a[j];
			}
			ans += tmp/double(x);
		}
		printf("%.6lf\n", ans);
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/FUSN2020/problems/CKWR01

**/