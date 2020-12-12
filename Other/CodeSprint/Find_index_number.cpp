/**
 * Author  : BurningTiles
 * Created : 2020-12-12 15:15:52
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

ll cal(string s){
	int ans=0;
	for(int i=1; i<s.size(); i++)
		ans += pow(2,i);
	return ans;
}

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll ans;
	string s;
	cin >> s;
	ans = cal(s);

	for(int i=0; i<s.size(); i++){
		if(s[i]=='7')
			ans += pow(2,s.size()-i-1);
	}

	cout << ans+1;
	return 0;
}

/**

Question : 
https://www.codechef.com/SPRT2020/problems/IDXNUMBR

**/