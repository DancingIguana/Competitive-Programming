#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, index = 0;
		bool flag = 0;
		string s;
		cin >> n;
		cin >> s;
		for(int i = 0; i < n; i++){
			if(s[i] != '?') {
				char letter = s[i];
				index = i;
				break;
			}
			if(i == n-1) {
				flag = 1;
			}
		}
		if(flag == 1) {
			s[0] = 'B';
			for(int i = 1; i<n; i++) {
				if(s[i-1] == 'B') {
					s[i] = 'R';
				} else {
					s[i] = 'B';
				}
			}
		} else {
		for(int i = index-1; i>=0; i--) {
			if(s[i + 1] == 'R') {
				s[i] = 'B';
			} else {
				s[i] = 'R';
			}
		}
		for(int i = index+1; i<n; i++) {
			if(s[i] == '?') {
				if(s[i-1] == 'R') {
					s[i] = 'B';
				} else {
					s[i] = 'R';
				}
			}
		}
		}
		cout << s << endl;
	}
	return 0;
}
