#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5;
map<int,vector<int>> adjacent;
vector<int> ans;
bool visited[maxN];

void dfs(int i) {
	visited[i] = true;
	for(int j = 0; j < adjacent[i].size(); j++) {
		if(!visited[adjacent[i][j]]) {
			dfs(adjacent[i][j]);
		}
	} 
}


int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		adjacent[a].push_back(b);
		adjacent[b].push_back(a);
	}
	for(int i = 0; i < n; i++) {
		if(!visited[i]) {
			//cout << "Visiting new neighborhood!" << endl;
			ans.push_back(i);
			dfs(i);
		}
	}

	/*	
        for(auto ad : adjacent) {
                cout << ad.first << " -> ";
                for(auto v : ad.second) cout << v << ", ";
                cout << endl;
        }
        */
	cout << ans.size() - 1 << endl;
	for(int i = 1; i < ans.size(); i++) {
		cout << ans[0] + 1 << " " << ans[i] + 1 << endl;
	}
	return 0;
}
