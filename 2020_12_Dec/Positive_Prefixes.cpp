/**
 * Author  : BurningTiles
 * Created : 2020-12-09 19:17:42
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
		ll n, k, count=0;
		cin >> n >> k;

		int a[n+1];
		
		if(n%2){
			for(int i=1; i<=n; i+=2) {
				a[i]=i;
				++count;
			}
			for(int i=2; i<=n; i+=2) a[i]=-i;
		}
		else{
			for(int i=2; i<=n; i+=2) {
				a[i]=i;
				++count;
			}
			for(int i=1; i<=n; i+=2) a[i]=-i;
		}

		if(count<k){
			for(int i=n; i>0 && count<k; i--)
				if(a[i]<0){
					a[i]=i;
					++count;
				}
		}

		else if(count>k){
			for(int i=n; i>0 && count>k; i--)
				if(a[i]>0){
					a[i]=-i;
					--count;
				}
		}

		for(int i=1; i<=n; i++) cout << a[i] << " ";
		cout << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/DEC20B/problems/POSPREFS

**/