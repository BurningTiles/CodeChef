/**
 * Author  : BurninTiles
 * Created : 2020-11-12 01:03:02
 * Link    : GitHub.com/BurninTiles
**/

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
	if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, profit=0, tmp;
	cin >> n;
	vector<ll> a(n);
	for(auto &x:a)
		cin >> x;
	
	sort(a.begin(), a.end());

	for(ll i=0; i<n; i++){
		tmp = a[i]*(n-i);
		if(tmp > profit) profit = tmp;
	}
	
	cout << profit;
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA01/problems/ZCO14003

**/