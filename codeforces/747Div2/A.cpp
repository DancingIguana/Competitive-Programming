#include <iostream>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	ll n;
	for(int i = 0; i < t; i++) {
		cin >> n;
		if(n < 0) {
			cout << -n << " " << n-1 << endl;
		}
		if(n > 0) {
			cout << -(n-1) << " " << n << endl;
		}
		if(n == 0) {
			cout << -1 << " " << 1 << endl;
		}
	}
	return 0;
}
