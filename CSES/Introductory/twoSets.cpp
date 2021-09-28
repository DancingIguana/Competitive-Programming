#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin >> n;
	ll total = (n*(n+1))/2;
	vector<ll> arr1;
	vector<ll> arr2;

	if(total % 2 == 0) {
		total = total/2;
		for(ll i = n; i > 0; i--) {
			if(total - i >= 0) {
				arr1.push_back(i);
				total -= i;
			}
			else {
				arr2.push_back(i);
			}
			
		}

		cout << "YES\n";
		cout << arr1.size() << "\n";
		for(ll i = 0; i < arr1.size(); i++) {
			cout << arr1[i] << " ";
		}

		cout << "\n" << arr2.size() << "\n";
		for(ll i = 0; i < arr2.size(); i++) {
			cout << arr2[i] << " ";
		}
	}
	else {
		cout << "NO\n";
	}
	return 0;
}
