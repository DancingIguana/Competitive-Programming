#include <iostream>
#include<math.h>
#define ll long long
using namespace std;

int main() {
	ll t, a, b ,c;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		ll nNodes = 2* abs(b-a);
		ll half = abs(b-a);
		//cout << nNodes;
		if(c <= nNodes && a<= nNodes && b  <= nNodes && ((a+half-1)%nNodes)+1 == b) {
			cout << ((c+half-1)%nNodes)+1 << endl;
		} else {
			cout << -1<<endl;
		}
	}	

	return 0;
}
