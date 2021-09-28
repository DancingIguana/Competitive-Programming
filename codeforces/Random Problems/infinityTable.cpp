#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main() {

	int t;
	ll i, j;
	cin >> t;
	
	ll k;
	while(t--) {
		cin >> k;
		ll aux = 1;
		while(k > pow(aux,2)) {
			//cout << pow(aux,2) << endl;
			aux += 1;
		}
		//cout << aux << endl;

		if(k < (pow(aux,2)-(aux-1))){
			j = aux;
			i = k - pow(j-1,2);
		} else {
			i = aux;
			j = -k + 1 + pow(i,2);
		}
		cout << i << " " << j << endl;
	}

	return 0;
}
