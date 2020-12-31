/**
 * Author  : BurningTiles
 * Created : 2020-12-23 19:45:08
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

	int n;
	cin >> n;
	int s = n*2-1;
	
	for(int i=0; i<n-1; i++){
		int j=n;
		for(int k=0; k<=i; k++ ){
			cout << j-- << " ";
		}
		++j;
		for(int k=0; k<(n-i-1)*2-1; k++){
			cout << j << " ";
		}
		for(int k=0; k<=i; k++){
			cout << j++ << " ";
		}
		cout << endl;
	}
	for(int i=n; i>0; i--)
		cout << i << " ";
	for(int i=2; i<=n; i++)
		cout << i << " ";
	cout << endl;
	for(int i=n-2; i>=0; i--){
		int j=n;
		for(int k=0; k<=i; k++ ){
			cout << j-- << " ";
		}
		++j;
		for(int k=0; k<(n-i-1)*2-1; k++){
			cout << j << " ";
		}
		for(int k=0; k<=i; k++){
			cout << j++ << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}

/**

Question : 


**/