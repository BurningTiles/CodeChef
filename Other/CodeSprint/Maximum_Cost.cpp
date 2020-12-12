/**
 * Author  : BurningTiles
 * Created : 2020-12-12 16:00:39
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

	int n, k, ans = 1;
	string s;
	bool flag = true;
	cin >> n >> k >> s;

	for(int i=0; i<s.size()-1; i++){
		if(flag){
			int tmp = 0, j;
			for(j=i+1; j<s.size(); j++)
				if(s[i]==s[j]) continue;
				else if(s[i]!=s[j] && tmp<k) ++tmp;
				else break;
			ans = max(ans, j-i);
		}
		if(s[i]==s[i+1])
			flag = false;
		else	
			flag = true;
	}

	cout << ans;
	
	return 0;
}

/**

Question : 
https://www.codechef.com/SPRT2020/problems/MXSCST

**/