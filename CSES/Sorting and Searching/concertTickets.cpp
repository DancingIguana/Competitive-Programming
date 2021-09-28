#include <iostream>
#include <set>
#include <vector>
#define ll long long
using namespace std;

int main() {
	
	ll n, m;
	multiset<ll> tickets;

	cin >> n >> m;
	while(n--){
		ll aux;
		cin >> aux;
		tickets.insert(aux);
	}
	
	while(m--) {
		ll price;
		cin >> price;
		
		auto it = tickets.lower_bound(price+1);
		if(it == tickets.begin()) {
			cout << -1 << endl;
		} else {
			it--;
			cout << *it << endl;
			tickets.erase(tickets.find(*it));
		}
		
	}	

	return 0;
}
