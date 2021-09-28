#include <iostream>

using namespace std;

#define ll long long

ll getMax(ll C, ll S, ll R) {
	if(C % S > 0 && R % S == 0) {
		return C/S + 1;
	}
	return C/S;
}

ll getMin(ll C, ll R, ll S) {
	C -= (S-1)*R;
	if(C < 0) {
		return 0;
	}
	if(C%S > 0) {
		return C/S + 1;
	}

	return C/S;
}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		ll C, R, S;
		cin >> C >> R >> S;
		cout << getMax(C,S,R) << " " << getMin(C,R,S) <<  endl;
	}
	return 0;
}
