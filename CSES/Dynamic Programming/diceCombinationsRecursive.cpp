/* RECURSIVE SOLUTION */

#include <iostream>
#define ll long long

using namespace std;
int count = 0;

ll solve(ll n) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}
	if (n > 0) {
		return solve(n-1) + solve(n-2) + solve(n-3) + solve(n-4) + solve(n-5) + solve(n-6);
	}
}

int main() {
	ll n;
	cin >> n;
	cout << solve(n);

	return 0;
}
