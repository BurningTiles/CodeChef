/**
 * Author  : BurningTiles
 * Created : 2020-12-23 19:41:43
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

	int n, tmp;
	cin >> n;
	int a[31]={0};
	
	for(int i=0; i<n; i++){
		cin >> tmp;
		++a[tmp];
	}

	for(int i=0; i<=30; i++){
		if(a[i]) cout << i << " ";
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/NQST2020/problems/HELPSANT

**/