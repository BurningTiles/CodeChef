/**
 * Author  : BurningTiles
 * Created : 2020-12-03 17:03:02
 * Link    : BurningTiles.github.io
**/

#include <bits/stdc++.h>
#define ll long long
#define lll __int128_t
#define endl '\n'
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		stack<char> st;
		string s;
		cin >> s;
		int res = 0;
		bool fnd = 0;
		for (int w = 0; w < s.size(); w++) {

			if (s[w] == '<')
				st.push(s[w]);
			else {
				if (st.size() == 1)
					res = w + 1;
				if (st.size())
					st.pop();
				else {
					cout << w << endl;
					fnd = 1;
					break;
				}
			}
		}
		if (!fnd) {
			if (st.size() == 0) {
				cout << s.size() << endl;
			} else
				cout << res << endl;
		}
	}

	return 0;
}
/* 
int main() {
	if (ifstream("input.txt")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int ans = 0, tmp = 0, counter = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '<'){
				++tmp;
				++counter;
			}
			else if (s[i]=='>'){
				++tmp;
				if(counter>0) --counter;
				else tmp = 0;
			}

			if (counter == 0 && tmp > ans)
				ans = tmp;
		}
		tmp -= counter;
		if (tmp > ans) ans = tmp;

		cout << ans << endl;
	}

	return 0;
} */

/**

Question : 
https://www.codechef.com/LRNDSA02/problems/COMPILER

**/