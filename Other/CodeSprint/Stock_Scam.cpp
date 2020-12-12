/**
 * Author  : BurningTiles
 * Created : 2020-12-12 15:07:39
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

	int k;
	string s;
	cin >> s >> k;
	for(int i=0; i<s.size(); i++){
		if(s[i]<'9' && k>0) {
			--k;
			cout << "9";
		}
		else cout << s[i];
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/SPRT2020/problems/STCKSCAM

**/