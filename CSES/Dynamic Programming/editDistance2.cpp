#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
	
	string s1, s2;
	cin >> s1 >> s2;
	
	int n = s1.size();
	int m = s2.size();
 
	int dp[s1.size()][s2.size()];
	
	dp[0][0] = 1;
 
	if(s1[0] == s2[0])
		dp[0][0] = 0;
 
	for(int i = 1; i < n; i++) {
		dp[i][0] = dp[i-1][0];
		if(s1[i] != s2[0] || i >= s2.size()) {
			dp[i][0]++;
		} 
	}
	for(int i = 1; i < m; i++) {
 		dp[0][i] = dp[0][i-1];
		if(s1[0] != s2[i] || i >= s1.size()) {
			dp[0][i]++;
		}
	}
 
	for(int i = 1; i < n; i++)
		for(int j = 1; j < m; j++) {
			if(s1[i] == s2[j]){
				dp[i][j] = dp[i-1][j-1];
			} else {
				dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]}) + 1;
			}
		}
 	/*
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < m; j++)
			cout << dp[i][j] << " ";
		cout << endl;
	}
	*/
	cout << dp[n-1][m-1] << endl;
	
	return 0;
}
