#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 1000000000
vector<string> bitChains;

void getBits(string s, int digitsLeft) {
	if(digitsLeft == 0) {
		bitChains.push_back(s);
	} else {
		getBits(s+"0", digitsLeft-1);
		getBits(s+"1", digitsLeft-1);
	}
}

int main() {
	int n;
	cin >> n;
	vector<lli> apples;
	lli total = 0, min = INF;
	getBits("", n);

	for(int i = 0; i < n; i++) {
		lli weight;
		cin >> weight;
		apples.push_back(weight);
	}

	for(int i = 0; i < bitChains.size(); i++) {
		lli A = 0, B = 0;
		for(int j = 0; j < n; j++) {
			//cout << bitChains[i][j];
			
			if(bitChains[i][j] == '0'){
				A += apples[j];
			} else {
				B += apples[j];
			}
		}
		if(abs(A-B) < min) {
			min = abs(A-B);
		}
	}

	cout << min;
	return 0;
}
