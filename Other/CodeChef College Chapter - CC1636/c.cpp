/**
 * Author  : DefineSenTinaL
 * Created : 2020-10-11 13:52:24
 * Program : Second Max of Three Numbers
**/

#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	
	while(n--){
		int a, b, c;
		cin >> a >> b >> c;
		if(a>b){
			if(a<c)
				cout << a << endl;
			else if(b>c)
				cout << b << endl;
			else
				cout << c << endl;
		}
		else {
			if(a>c)
				cout << a << endl;
			else if(b>c)
				cout << c << endl;
			else
				cout << b << endl;
		}
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/CC1636/problems/SNDMAX

**/