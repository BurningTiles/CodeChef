/**
 * Author  : DefineSenTinaL
 * Created : 2020-10-11 13:52:24
 * Program : DECIMAL TO BINARY 
**/

#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	while(n--){
		int x, ans[8], i=0;
		cin >> x;
		do{
			ans[i++] = x%2;
			x/=2;
		} while(x);

		while(i>0 && i--) cout << ans[i];
		cout << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/CC1636/problems/INTRN004

**/