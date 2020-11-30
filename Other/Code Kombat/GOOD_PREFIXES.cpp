/**
 * Author  : BurningTiles
 * Created : 2020-11-29 23:19:00
 * Link    : BurningTiles.github.io
 * TLE
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

bool test (string &s, string &s2, int n){
	bool flag = true;
	for(int i=0; i<s.size() && n<s2.size(); i++, n++){
		if(s[i]!=s2[n]) return false;
	}
	return true;
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
	while(tt--){
		int m, n;
		string s1, s2;
		cin >> m >> n >> s1 >> s2;
		for(int i=0; i<m; i++){
			int ans = 0;
			string s=s1.substr(0, i+1);
			int len = s.size();
			
			for(int j=0; j<n-len+1; j++){
				if(test (s, s2, j))
					ans += s2.size()-j-len+1;		
			}
			cout << ans << " ";
		}
		cout << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/FUSN2020/problems/CKWR03

**/