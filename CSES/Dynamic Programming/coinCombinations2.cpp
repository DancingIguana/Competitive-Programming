#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

#define ll long long
#define m 1000000007

int main() {
	int n;
	ll x;
	cin >> n >> x;
	
	vector<ll> coins;
	set<ll> lengths;

	vector<ll> value(x+1);
	fill(value.begin(), value.end(), 0);


	while(n--) {
		ll aux;
		cin >> aux;
		coins.push_back(aux);
	}

	value[0] = 1;
	for(auto c : coins) {
		for(ll i = 1; i <= x; i++) {
			if(i-c >= 0) {
				value[i] += value[i-c];
				value[i] %= m;
			}
		}
	}
	
	cout << value[x];	
	return 0;
}
