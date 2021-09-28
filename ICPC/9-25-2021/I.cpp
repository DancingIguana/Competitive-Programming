#include <iostream>
#include <string>
using namespace std;

#define ll long long

ll getDigitProd(ll n) {
	ll result = 1;
	while(n >= 10) {
		result *= n%10;
		n /= 10;
	}	
	result *= n%10;
 
	return result;
}

ll solve(ll num) {
	if(num >= 0 && num <= 9) {
		return 0;
	}
	return solve(getDigitProd(num))+1;
}

int main() {	
	int t;
	cin >> t;
	while(t--) {
		ll num;
		cin >> num;	
		cout << solve(num) << endl;
	}	
	
	return 0;
}
