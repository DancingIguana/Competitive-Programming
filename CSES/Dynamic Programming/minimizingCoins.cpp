#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define INF 1000000007


int main() {
	int n;
	ll x;
	cin >> n >> x;
	vector<ll> coins;

	vector<ll> values(x+1);
	fill(values.begin(), values.end(), 0);

	while(n--) {
		ll aux;
		cin >> aux;
		coins.push_back(aux);
	}
		
	values[0] = 0;
	for(ll i = 1; i <= x; i++) {
		//cout << "Pass" << endl;
		values[i] = INF;
	
		for(auto c : coins) {
			if(i -c >= 0) {
				//cout << "Comparing " << values[i] << " " << values[i-c]+1 << endl;
				//cout << "I got " << min(values[i] , values[i-c] + 1) << endl;
				values[i] = min(values[i], values[i-c]+1);
				//cout << "I chose " << values[i] << endl;
			}
		}
	}
	/*
	for(int i = 0; i < x+1; i++) {
		cout << values[i] << endl;
	}
	*/
	if(values[x] == INF){
		values[x] = -1;
	}
	cout << values[x];
	return 0;
}
