#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	
	lli n, x;
	vector<lli> weights;
	bool flag = true;

	cin >> n >> x;

	for(lli i = 0; i < n; i++) {
		lli aux;
		cin >> aux;
		weights.push_back(aux);
	}
	
	sort(weights.begin(), weights.end());
	lli i = 0, j = n-1, gondolas = 0;

	while(true) {
		
		if(i == j) {
			gondolas += 1;
			break;
		}
			
		if (i + 1 == j) {
			if((weights[i] + weights[j]) > x) {
				gondolas += 2;
				break;
			}
			else {
				gondolas += 1;
				break;
			}
		}

		if((weights[i] + weights[j]) > x) {
			gondolas += 1;
			j -= 1;
		} else {
			gondolas += 1;
			i += 1;
			j -= 1;
		}
	}

	cout << gondolas;

	return 0;
}
