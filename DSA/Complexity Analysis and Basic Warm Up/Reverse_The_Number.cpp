/**
 * Author  : BurninTiles
 * Created : 2020-11-10 19:23:37
 * Link    : GitHub.com/BurninTiles
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, len;
	cin >> n;
	string tmp;
	while(n--){
		cin >> tmp;
		len = tmp.size()-1;
		while(tmp[len]=='0') len--;
		while(len>=0) cout << tmp[len--];
		cout << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/FLOW007

**/