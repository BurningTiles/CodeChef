/**
 * Author  : DefineSenTinaL
 * Created : 2020-10-11 13:52:24
 * Program : Maximum of Three Numbers
**/

#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	while(n--){
		int a, b, c;
		cin >> a >> b >> c;
		int max = a>b ? a>c ? a : c : b>c ? b : c;
		cout << max << endl;
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/CC1636/problems/MAXTHREE

**/