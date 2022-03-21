#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n, m;
	cin >> n >> m;
	vector<bool> visited(n,false);
	map<int,vector<int>> adjacent;
	vector<vector<int>> paths;

	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		adjacent[a].push_back(b);
		adjacent[b].push_back(a);
	}
	
	queue<int> q;
	q.push(0);
	visited[0] = true;
	vector<int> path(n,-1);
	int cur;
	while(!q.empty()) {
		cur = q.front();
		q.pop();
		//cout << "Current " << cur << endl;
		for(auto a : adjacent[cur]) {
			//cout << "Adding " << a << "to queue" << endl;
			if(!visited[a]) {
				visited[a] = true;
				//cout << "Adding " << a << "to queue" << endl;
				q.push(a);
				path[a] = cur;
				//cout << "Path from " << a << "to " << cur << endl; 
			}
		}
	}
	/*
	cout << "Path" << endl;
	for(auto p :path) cout << p << " ";
	cout << endl;
	*/
	vector<int> ans = {};
	if(!visited[n-1]) {
		cout << "IMPOSSIBLE";
	} else {
		cur = n-1;
		
		while(cur != 0) {
			//cout << "Cur = " << cur << endl;
			ans.push_back(cur);
			cur = path[cur];
		}
		ans.push_back(0);
		cout << ans.size() << endl;
		for(int i =  ans.size()-1; i >= 0; i--) {
			cout << ans[i] + 1 << " ";
		}
	}
	
	return 0;
}
