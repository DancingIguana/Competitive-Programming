#include <iostream>
#include <set>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

#define ll long long int

int mxN = 100000;

int main() {
	int dp[mxN+1];
	int n;
	cin >> n;
	vector<int> coins;
	for(int i = 0; i < n; i++) {
		int coin;
		cin >> coin;
		coins.push_back(coin);
	}
	fill(dp, dp + mxN + 1, 0);
	dp[0] = 1;
	set<int> solutions;
	for(auto c : coins) {
		for(int j = mxN; j > 0; j--) {
			if(j-c >= 0 && dp[j - c] == 1){
				dp[j] = 1;
				solutions.insert(j);
			}
		}
	}
	
	cout << solutions.size() << endl;	
	for(auto s : solutions)
		cout << s << " ";
	return 0;
}
