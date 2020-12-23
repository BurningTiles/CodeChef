/**
 * Author  : BurningTiles
 * Created : 2020-12-22 21:34:09
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
		int n, odd=0, even=0, tmp;
		cin >> n;
		while(n){
			tmp = n%10;
			tmp%2 ? odd+=tmp : even+=tmp;
			n /= 10;
		}
		
		odd%3==0 || even%4==0 ? cout << "Yes\n" : cout << "No\n";
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/CSTR2020/problems/DELHI

**/