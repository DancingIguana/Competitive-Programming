#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	lli counter = 0;
	vector<string> results;

	do {
		results.push_back(s);
		counter += 1;
	} while(next_permutation(s.begin(), s.end()));
	
	cout << counter << "\n";
	for(lli i = 0; i < results.size(); i++) {
		cout << results[i] << "\n";
	}

	return 0;
}
