/**
 * Author  : BurninTiles
 * Created : 2020-11-10 19:21:43
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

	int n;
	while(cin >> n && n!=42)
		cout << n << endl;
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/TEST

**/