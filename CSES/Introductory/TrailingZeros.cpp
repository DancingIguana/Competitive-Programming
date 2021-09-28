#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	lli n, zeros;
	cin >> n;
	for(lli i = 5; i <=  n; i *= 5) {
		zeros += n/i; 
	}
	
	cout << zeros << "\n";
	return 0;
}
