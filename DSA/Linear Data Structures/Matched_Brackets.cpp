/**
 * Author  : BurningTiles
 * Created : 2020-12-22 08:18:32
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
	
	int n, tmp, current_depth=0, last_zero=0;
	cin >> n;
	pair<int,int> depth(0,0), maxSeq(0,0);

	for(int i=1; i<=n; i++){
		cin >> tmp;
		
		tmp == 1 ? ++current_depth : --current_depth;

		if(current_depth > depth.first){
			depth.first = current_depth;
			depth.second = i;
		}

		if(current_depth==0){
			if(i-last_zero>maxSeq.first){
				maxSeq.first = i-last_zero;
				maxSeq.second = last_zero+1;
			}
			last_zero=i;
		}
	}

	cout << depth.first << " " << depth.second << " " << maxSeq.first << " " << maxSeq.second;
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA02/problems/ZCO12001

**/