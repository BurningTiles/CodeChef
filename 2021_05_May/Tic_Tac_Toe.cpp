/**
 * Author  : BurningTiles
 * Created : 2021-05-09 10:06:53
 * Link    : BurningTiles.github.io
 * File    : Tic_Tac_Toe.cpp
**/

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl '\n'
using namespace std;

inline bool test(char a, char b, char c, char d){
	return a==b && b==c && c==d;
}

bool winner(char a[], char player){
	if(test(a[0],a[1],a[2],player)) return true;
	if(test(a[3],a[4],a[5],player)) return true;
	if(test(a[6],a[7],a[8],player)) return true;
	if(test(a[0],a[3],a[6],player)) return true;
	if(test(a[1],a[4],a[7],player)) return true;
	if(test(a[2],a[5],a[8],player)) return true;
	if(test(a[0],a[4],a[8],player)) return true;
	if(test(a[2],a[4],a[6],player)) return true;
	return false;
}

int solution(){
	char a[9];
	int x=0, o=0, _=0;
	for(int i=0; i<9; i++){
		cin >> a[i];
		if(a[i]=='X') ++x;
		else if(a[i]=='O') ++o;
		else ++_;
	}
	if(x<o) return 3;
	if(x>o+1) return 3;
	bool x_win = winner(a,'X'), o_win = winner(a,'O');
	if(x_win && o_win) return 3;
	if(x_win && x==o) return 3;
	if(o_win && x>o) return 3;
	if(x_win || o_win) return 1;
	if(_) return 2;
	return 1;
}

signed main() {
	if(ifstream("input.txt")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tt;
	cin >> tt;

	while(tt--) {
		cout << solution() << endl;
	}

	return 0;
}

/**

Question :
https://www.codechef.com/MAY21C/problems/TCTCTOE

**/