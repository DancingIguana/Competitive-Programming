#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define ll long long
#define INF 1e9+7
//ll INF = 1e9+7;

bool ready[1000000];
ll value[1000000];
set<int> getDigits(ll n) {
	set<int> digits;
	while(n >= 10) {
		if(n%10 != 0) {
			 digits.insert(n%10);
		}
		n/= 10;
	}
	
	digits.insert(n%10);

	return digits;
}

ll solve(ll x) {
	if(x < 0) {
		return INF;
	}
	if(x == 0) {
		return 0;
	}
	if(ready[x]) {
		return value[x];
	}
	set<int> digits = getDigits(x);
	ll best = INF;
	for(auto d : digits) {
		best = min(best, solve(x-d)+1);
	}
	value[x] = best;
	ready[x] = true;
	return best;
}

int main() {
	
	//set<int> digits = getDigits(1234567890);
	ll  n, result;
	cin >> n;
	result = solve(n);
	
	cout << result;	

	/*
	for(auto d : digits) {
		cout << d << endl;
	}
	*/
	
	return 0;
}
