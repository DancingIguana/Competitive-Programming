#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> v) {
	int n = v.size();
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

}

int main() {
	int n, m, q;
	cin >> n >> m >> q;
	
	vector<vector<int>> adj(n,vector<int>(n,0));
	for(int i = 0; i < m; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		a--;
		b--;
		if(adj[a][b] == 0)
			adj[a][b] = w;
			adj[b][a] = w;
			continue;
		int w2 = min(w,adj[a][b]);
		adj[a][b] = min(w,w2);
		adj[b][a] = min(w,w2);
	}
	vector<pair<int,int>> queries;

	for(int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		queries.push_back({a,b});
	}
	
	cout << endl;
	printMatrix(adj);
	cout << endl << "Queries: "<< endl;
	printMatrix(queries);
	
	return 0;
}
