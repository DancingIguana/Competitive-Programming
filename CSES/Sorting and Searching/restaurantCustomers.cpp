#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;


int main() {
	ll n, max;
	max = 0;
	vector<tuple<ll, int> > customers;
	cin >> n;

	while(n--) {
		ll aux1, aux2;
		cin >> aux1 >> aux2;
		customers.push_back(make_tuple(aux1, +1));
		customers.push_back(make_tuple(aux2, -1));
	}

	sort(customers.begin(), customers.end());
	ll ans = 0;
	for(int i = 0; i < customers.size(); i++){
		ans += get<1>(customers[i]);
		//cout << get<1>(customers[i]) << endl;
		//cout << ans << endl;
		if(ans > max) {
			max = ans;
		}
	}

	cout << max;
	return 0;
}
