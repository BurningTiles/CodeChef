/**
 * Author  : BurningTiles
 * Created : 2020-11-10 21:29:20
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void test(){
	string str;
	cin >> str;
	int x[128]={0}, n=str.size(), m = n/2 + n%2;
	for(int i=0; i<n/2; i++)
		++x[str[i]];
	for(int i=m; i<n; i++)
		--x[str[i]];
	for(int i=97; i<125; i++)
		if(x[i]){
			cout << "NO\n";
			return;
		}
	cout << "YES\n";
}

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tt;
	cin >> tt;

	while(tt--)
		test();

	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/LAPIN

**/