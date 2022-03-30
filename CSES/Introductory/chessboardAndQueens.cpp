#include <iostream>
using namespace std;

const int n = 8;
int ans = 0;
char board[n][n];
bool column[n] = {0};
bool diag1[(n-1)*2+1] = {0} ;
bool diag2[(n-1)*2+1] = {0};

void search(int y) {
	if (y == n) {
		ans++;
		return;
	}
	for (int x = 0; x < n; x++) {	
		if (column[x] || diag1[x+y] || diag2[x-y+n-1] || board[y][x] == '*') continue;
		column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
		search(y+1);
		column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
	}
}


int main() {

	for(int i = 0; i < n; i ++) 
		for(int j = 0; j < n; j++) { 
			cin >> board[i][j];
		}
	
	
	search(0);

	cout << ans;
	return 0;
}
