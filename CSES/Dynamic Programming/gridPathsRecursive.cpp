#include <iostream>
#include <vector>

#define ll long long

using namespace std;

ll m = 1e9+7;
ll solve(int n, vector<vector<char>> grid, int x, int y) {
	if(x >= n || y >= n) {
		return 0;
	}
	if(grid[x][y] == '*') {
		return 0;
	}
	if(x == n-1 && y == n-1) {
		return 1;
	}
	cout << "s" << endl;	
	ll npaths = solve(n, grid, x, y+1) + solve(n, grid, x+1,y);
	npaths %= m;

	return npaths;
}

int main() {
	
	int n;
	cin >> n;
	vector<vector<char>> grid( n, vector<char> (n));
	/*
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}
	*/
	for(int i = 0; i < 1000; i ++) {
		for(int j = 0; j < 1000; j++) {
			grid[i][j] = '.';
		}
	}
	cout << "GRID DONE" << endl;
	ll result = solve(n, grid, 0, 0);
	cout << result;
	
	return 0;
}
