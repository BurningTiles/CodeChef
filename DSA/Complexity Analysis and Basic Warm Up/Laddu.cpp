/**
 * Author  : BurningTiles
 * Created : 2020-11-14 01:09:11
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

	int t;
	cin >> t;
	while(t--){
		int n, laddu = 0, num;
		string origin, tmp;
		cin >> n >> origin;
		while(n--){
			cin >> tmp;
			switch(tmp[8]){
				case 'W':
					cin >> num;
					laddu += 300 + (num<20 ? 20-num : 0);
					break;
				case 'R':
					laddu += 300;
					break;
				case 'D':
					cin >> num;
					laddu += num;
					break;
				case 'H':
					laddu += 50;
					break;
			}
		}
		origin=="INDIAN" ? cout << laddu/200 : cout << laddu/400;
		cout << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/LADDU

**/