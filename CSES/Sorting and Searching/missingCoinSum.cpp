#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long


int main() {
	int n;
	cin >> n;
	int coins[n];
	for(int i = 0; i < n; i++) {
		cin >> coins[i];
	}
	
	sort(coins, coins + n);
	ll res = 1;
	for(int i = 0; i < n && coins[i] <= res; i++) {
		res += coins[i];
	}

	cout << res;
	return 0;
}
