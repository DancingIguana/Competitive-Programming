#include <iostream>
#include <vector>

using namespace std;

#define ll long long int
const int mod = 1e9+7;
const int mxN = 100000, mxM = 100;
int x[mxN];
ll dp[mxN][mxM] = {0};
int main() {
        ll n, m;
        cin >> n >> m;
	
	//vector<int> x(n);
	//vector<vector<ll>> dp(n,vector<ll>(m+1,0));

        for(int i = 0; i < n; i++)
                cin >> x[i];

        dp[0][x[0]-1] = 1;
	
        if(x[0] == 0) {
                for(int i = 0; i < m; i++) {
                        dp[0][i] = 1;
                }
        }

        for(int i = 1; i < n; i++) {
                if(x[i] != 0) {
                        for(auto it : {-1,0,1}) {
                                if(((x[i]-1) + it >= 0) && (((x[i]-1) + it) < m)) {
                                        dp[i][x[i]-1] += dp[i-1][(x[i] - 1) + it];
					dp[i][x[i]-1] %= mod;
                                }
                        }
                        continue;
                }
                for(int j = 0; j < m; j++) {
                        for(auto it : {-1,0,1}) {
                                if((j + it >= 0) && ((j + it) < m)) {
                                        dp[i][j] += dp[i-1][j+it];
					dp[i][j] %= mod;
                                }

                        }
              }
        }
        
        /*
        for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++)
                        cout << dp[i][j] << "\t\t";
                cout << endl;
        }
	*/
        ll ans = 0;

        for(int i = 0; i < m; i++) {
                ans += dp[n-1][i];
		ans %= mod;
        }

        cout << ans;
        return 0;
}
