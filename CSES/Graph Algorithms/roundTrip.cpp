#include <bits/stdc++.h>
using namespace std;


map<int,vector<int>> roads;
vector<bool> visited;
vector<int> parents;
int finalCity;

bool dfs(int node, int parent) {
	visited[node] = true;
	vector<int> adj = roads[node];
	parents[node] = parent;
	for(int i = 0; i < adj.size(); i++) {
		if(visited[adj[i]] && adj[i] != parent) { //DETECT CYCLE
			parents[adj[i]] = node;
			finalCity = adj[i];
			return true;
		}
		if(!visited[adj[i]]) {
			if(dfs(adj[i],node)) return true;
		}
	}
	return false;
}


int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		roads[a].push_back(b);
		roads[b].push_back(a);
	}

	for(int i = 0; i < n; i++) {
		visited.push_back(false);
		parents.push_back(-1);
	}
	
	bool foundValidCycle = false;
	for(int i = 0; i < n; i++) {
		if(!visited[i]) {
			if(dfs(i,-1)) {
				foundValidCycle = true;
				break;
			}
		}
	}
	
	if(foundValidCycle) {
		int cur = parents[finalCity];
		vector<int> ans;
		ans.push_back(finalCity);
		while(cur != finalCity) {
			ans.push_back(cur);
			cur = parents[cur];
		}
		ans.push_back(finalCity);
	
	
		cout << ans.size() << '\n';
		for(auto a : ans) cout << a + 1 << " ";
	} else {
		cout << "IMPOSSIBLE";
	}
	return 0;
}
