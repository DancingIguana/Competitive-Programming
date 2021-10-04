#include <iostream>
#include <map>
using namespace std;

#define ll long long


int main() {
	int n;
	cin >> n;
	map<int,int> positions;
	for(int i = 1; i <= n; i++) {
		int aux;
		cin >> aux;
		positions[aux] = i;
	}
	int ans = 1;
	for(int i = 1; i < n; i++) {
		if(positions[i] > positions[i+1]) {
			ans += 1;
		}
	}
	cout << ans;
	return 0;
}
