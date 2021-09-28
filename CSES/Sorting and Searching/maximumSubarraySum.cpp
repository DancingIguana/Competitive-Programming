#include <iostream>

using namespace std;

#define ll long long
ll INF = -(1e9);
int main() {
	ll n;
	cin >> n;
	ll x[n];
	for(ll i = 0; i < n; i++) {
		cin >> x[i];
	}
	ll sum = 0, best = INF;
	for(ll i = 0; i < n; i++) {
		sum = max(x[i], sum + x[i]);
		best = max(best,sum);
	}
	cout << best << endl;
	return 0;
}
