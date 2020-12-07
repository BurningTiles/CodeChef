/**
 * Author  : BurningTiles
 * Created : 2020-11-09 10:06:18
 * Link    : BurningTiles.github.io
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
	
	int tt;
	cin >> tt;
	while(tt--){
		int n, sum=0;
		cin >> n;
		vector<int> a(n); 
		for(auto &x:a){
			cin >> x;
			sum += x;
		}
		int dp[n+1][sum+1];
		for(int i=0; i<=n; i++)
			dp[i][0]=1;
		for(int j=1; j<=sum; j++)
			dp[0][j]=0;	

		for(int i=1; i<=n; i++)
			for(int j=1; j<=sum; j++){
				dp[i][j] = dp[i-1][j];
				if(a[i-1]<=j)
					dp[i][j] = max(dp[i][j], dp[i-1][j-a[i-1]]);
			}
		
		for(int i=sum/2; i>=0; i--){
			if(dp[n][i]){
				sum -= i;
				break;
			}
		}
		cout << sum << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/NOV20B/problems/ADADISH

**/