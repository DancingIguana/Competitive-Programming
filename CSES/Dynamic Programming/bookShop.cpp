#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
	ll n;
	int  x;
	cin >> n >> x;
	vector<int> s(n); //sheets
	vector<int> h(n); // prices
	vector<ll> value(x+1);

	for(int i = 0; i < n; i++) {
		cin >> h[i];	
	}
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = x; j >= h[i]; j--) {
			value[j] = max(value[j], value[j-h[i]] + s[i]);
		}
	}

	cout << value[x];


	return 0;
}
