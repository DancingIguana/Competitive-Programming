#include <iostream>

#define INF 1e9

using namespace std;

const int mxN = 505;
int dp[mxN][mxN];


int main() {
	int a, b;
	cin >> a >> b;
	
	for(int i = 0; i < mxN; i++)
		for(int j = 0; j < mxN; j++)
			dp[i][j] = INF;

	for(int i = 0; i < mxN; i++)
		dp[i][i] = 0;	

	for(int i = 1; i <= a; i++)
		for(int j = 1; j <= b; j++) {
			for(int c = 1; c < i; c++)
				dp[i][j] = min(dp[i][j], dp[i-c][j] + dp[c][j] + 1);
			
			for(int c = 1; c < j; c++)
				dp[i][j] = min(dp[i][j], dp[i][j-c] + dp[i][c] + 1);
		}

	cout << dp[a][b];
	return 0;
}
