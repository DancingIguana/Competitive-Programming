#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define m 1000000007
int main() {

	int n;
	ll x;
	cin >> n >> x;
	
	vector<ll> value(x+1);
	fill(value.begin(), value.end(), 0);	

	vector<ll> coins;

	while(n--) {
		ll aux;
		cin >> aux;
		coins.push_back(aux);
	}
	
	value[0] = 1;

	for(ll i = 0; i <= x; i++) {
		for(auto c : coins) {
			if(i - c >= 0) {
				value[i] += value[i-c];
				value[i] %= m;
			}
		}
	}
	
	cout << value[x] << endl;
	return 0;
}
