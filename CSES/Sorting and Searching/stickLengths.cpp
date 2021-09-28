#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

#define ll long long



int main() {
	ll n;
	cin >> n;
	
	ll numbers[n];
	for(ll i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	sort(numbers, numbers+n);
	ll x = numbers[n/2];

	ll total = 0;
	for(ll i = 0; i < n; i++) {
		total += abs(x-numbers[i]);
	}
	cout << total << endl;

	return 0;
}
