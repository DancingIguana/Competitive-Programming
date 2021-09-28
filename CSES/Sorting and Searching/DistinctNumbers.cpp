#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	lli n;
	cin >> n;
	set<lli> s;

	for(lli i = 0; i < n; i++) {
		lli aux;
		cin >> aux;
		s.insert(aux);
	}

	cout << s.size();
	
	return 0;
}
