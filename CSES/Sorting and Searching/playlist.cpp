#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long

const int mxN = 2*10e5;
int ids[mxN];

int main() {
	int n, result = 0;
	map<int,int> playlist;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> ids[i];
	}
	int j = 0;
	for(int i = 0; i < n; i++) {
		while(playlist[ids[j]] < 1 && j < n) {
			playlist[ids[j]]++;
			j++;
		}
		result = max(j-i, result);
		playlist[ids[i]]--;
	}
	cout << result;
	return 0;
}
