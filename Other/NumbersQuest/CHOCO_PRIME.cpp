/**
 * Author  : BurningTiles
 * Created : 2020-12-23 19:34:12
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
		bool flag = true;
		for(int i=2; i<=sqrt(n); i++){
			if (n%i==0){
				flag = false;
				break;
			}
		}

		ostringstream ss;
		ss << n;
		string s = ss.str();
		for(int i=0; i<s.size(); i++){
			if(s[i]!=s[s.size()-i-1]){
				flag = false;
				break;
			}
		}
		
		flag ? cout << "Yes\n" : cout << "No\n";
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/NQST2020/problems/CPRIME

**/