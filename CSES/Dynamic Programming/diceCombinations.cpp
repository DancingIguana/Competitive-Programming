/* NON-RECURSIVE SOLUTION */
#include <iostream>
#include <vector>
#define m 1000000007

#define ll long long
using namespace std;
int main() {
	ll n;
	cin >> n;
	
	vector<ll>count(n+1);	
	fill(count.begin(), count.end(), 0);

	ll dice[6] = {1,2,3,4,5,6};
	
	count[0] = 1;
	for(ll i = 1; i <= n; i++) {
		for(auto d: dice) {
			//cout << d;
			if(i - d >= 0) {
				count[i] += count[i-d];
				count[i] %= m;
			}
		}
	}

	cout << count[n];
	//for(int i = 0; i < n+1; i++) {
	//	cout << count[i] << endl;
	//}

	return 0;
}
