/**
 * Author  : BurningTiles
 * Created : 2021-05-12 19:12:36
 * Link    : BurningTiles.github.io
 * File    : An_Interesting_Sequence.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl '\n'
using namespace std;

int N=4e6+5;
int phi[4000005], ans[4000005];

void init() {
	for(int i=0; i<N; i++){
		phi[i]=i;
		ans[i]=0;
	}

	for(int p=2; p<N; p++){
		if(phi[p]==p){
			phi[p]=p-1;
			for(int i=2*p; i<N; i+=p)
				phi[i]=(phi[i]/p)*(p-1);
		}
	}

	for(int i=1; i<N; i++){
		ans[i]+=i-1;
		for(int j=2*i; j<N; j+=i){
			ans[j]+=i*((1+phi[j/i])/2);
		}
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	init();

	int tt;
	cin >> tt;

	while (tt--) {
		int k;
		cin >> k;
		cout << ans[4*k+1] << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/MAY21C/problems/ISS

**/