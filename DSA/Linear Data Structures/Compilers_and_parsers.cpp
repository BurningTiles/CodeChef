/**
 * Author  : BurningTiles
 * Created : 2020-12-22 10:01:55
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
		string s;
		cin >> s;
		int d=0, max=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='<') ++d;
			else{
				--d;
				if(d==0) max = i+1;
				if(d<0) break;
			}
		}
		cout << max << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA02/problems/COMPILER

**/