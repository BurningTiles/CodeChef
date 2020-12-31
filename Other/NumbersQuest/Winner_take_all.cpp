/**
 * Author  : BurningTiles
 * Created : 2020-12-23 20:01:30
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
		int n;
		cin >> n;
		if(n==1){
			cout << "Grinch\n";
			continue;
		}
		if(n%2)
			cout << "Me\n";
		else{
			int x=0;
			while(n%2==0 && n!=2){
				n/=2;
				++x;
			}
			x%2==0 ? cout << "Me\n" : cout << "Grinch\n";
		}
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/NQST2020/problems/WINALL

**/