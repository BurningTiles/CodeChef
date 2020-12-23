/**
 * Author  : BurningTiles
 * Created : 2020-12-22 09:12:20
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

int priority(char ch){
	if(ch=='+' || ch=='-') return 1;
	if(ch=='*' || ch=='\\') return 2;
	if(ch=='^') return 3;
	return -1;
}

int main(){
	/* if(ifstream("input.txt")){
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0); */

	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		char ch;
		vector<char> x;
		for(int i=0; i<n; i++){
			cin >> ch;
			if(ch>='A' && ch<='Z')
				cout << ch;
			else if(ch=='(') 
				x.push_back(ch);
			else if(ch==')'){
				while(x.size() && x.back()!='('){
					cout << x.back();
					x.pop_back();
				}
				if(x.size()) x.pop_back();
			}
			else{
				while(x.size() && priority(x.back())>=priority(ch)){
					cout << x.back();
					x.pop_back();
				}
				x.push_back(ch);
			}
		}
		while(x.size()){
			cout << x.back();
			x.pop_back();
		}
		cout << endl;
	}
	
	return 0;
}

/**

Question : 
https://www.codechef.com/LRNDSA02/problems/INPSTFIX

**/