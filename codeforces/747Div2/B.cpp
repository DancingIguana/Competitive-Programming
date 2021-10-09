#include <iostream>
#include<bitset>
#include <math.h>
using namespace std;

#define ll long long int
#define m 1000000007
int main() {
	int t
	cin >> t;
	for(int i = 0; i < t; i++) {
		ll k,n, ans = 0;
		cin >> k >> n;
		bitset<32> b(n);
		//cout << b << endl;
		for(int j = 0; j < b.size(); j++) {
			if(b[j] == 1) {
				//cout << "1: " << j << endl;
				ans += pow(k,j);
				ans %= m;
				
			}
		}		
		cout << ans << endl;
	}
	return 0;
}
