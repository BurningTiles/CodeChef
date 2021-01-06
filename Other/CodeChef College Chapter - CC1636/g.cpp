/**
 * Author  : DefineSenTinaL
 * Created : 2020-10-11 13:52:24
 * Program : Prime Problem 
**/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> prime;
	prime.push_back(2);
	int s=1;
	cout << "2\n";

	for(int i=3; s<n; i+=2){
		bool flag = true;
		int sqrt_i = sqrt(i);
		for(int j=0; prime[j]<=sqrt_i && j<s; j++)
			if(i%prime[j]==0){
				flag = false;
				break;
			}
		if(flag){
			cout << i << endl;
			prime.push_back(i);
			++s;
		}
	}

	return 0;
}

/**

Question : 
https://www.codechef.com/CC1636/problems/INTRN020

**/