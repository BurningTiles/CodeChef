/**
 * Author  : DefineSenTinaL
 * Created : 2020-10-11 13:52:24
 * Program : Perfect Numbers
**/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		long long n, ans=1;
		cin >> n;
		if(n==1){
			cout << "NO\n";
			continue;
		}
		long long sn=sqrt(n);

		for(int i=2; i<=sn; i++)
			if(n%i==0){
				ans += i;
				ans += n/i;
			}

		if(sn * sn == n) ans -= sn;
		
		//cout << ans << endl;
		ans==n ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/CC1636/problems/INTRN006

**/