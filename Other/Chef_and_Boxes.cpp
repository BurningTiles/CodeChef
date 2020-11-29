/**
 * Author  : BurningTiles
 * Created : 2020-11-23 19:50:46
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
		int n, i, j;
		cin >> n;
		vector<int> a(n);
		for(auto &x:a) cin >> x;
		vector<int> b = a;
		sort(b.begin(), b.end());
		int min=0, max=n;

		for(i=0; i<n; i++)
			if(a[i]!=b[i]){
				min = i;
				break;
			}

		for(j=n-1; j>=0; j--)
			if(a[j]!=b[j]){
				max = j;
				break;
			}
		
		j>i ? cout << max-min+1 << endl : cout << "0\n";
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/ENNO2020/problems/ENCDNOV

**/