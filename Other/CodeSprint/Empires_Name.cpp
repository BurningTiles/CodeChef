/**
 * Author  : BurningTiles
 * Created : 2020-12-12 15:58:03
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

	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++){
		if(s[i]<='Z' && s[i]>='A')
			s[i] += 32;
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
			continue;
		cout << "." << s[i];
	}
	cout << endl;
	
	return 0;
}

/**

Question : 
https://www.codechef.com/SPRT2020/problems/EMPRNM

**/