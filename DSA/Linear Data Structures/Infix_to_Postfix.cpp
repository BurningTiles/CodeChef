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
	if(ch=='*' || ch=='/') return 2;
	if(ch=='^') return 3;
	return -1;
}

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
		int n;
		string s;
		cin >> n >> s;
		vector<char> x;
		for(int i=0; i<s.size(); i++){
			if(s[i]>='A' && s[i]<='Z')
				cout << s[i];
			else if(s[i]=='(') 
				x.push_back(s[i]);
			else if(s[i]==')'){
				while(x.back()!='('){
					cout << x.back();
					x.pop_back();
				}
				x.pop_back();
			}
			else{
				while(x.size()>0 && priority(x.back())>=priority(s[i])){
					cout << x.back();
					x.pop_back();
				}
				x.push_back(s[i]);
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