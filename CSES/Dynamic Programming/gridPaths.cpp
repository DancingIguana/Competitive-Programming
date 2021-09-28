#include <iostream>
#include <vector>

using namespace std;

#define ll long long
ll m = 1e9+7;

int main() {

	int n;
	cin >> n;

	vector<vector<char>> grid( n+1, vector<char> (n+1, '*')); 
	vector<vector<ll>> paths(n+1,vector<ll> (n+1, 0));

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> grid[i][j];
		}
	}

	
	paths[1][1] = 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(grid[i][j] == '*') {
				paths[i][j] = 0;
			}
			if(grid[i][j] == '.') {
				paths[i][j] += paths[i-1][j] + paths[i][j-1];
				paths[i][j] %= m;
			}
		}
	}

	cout << paths[n][n];
	return 0;
}
