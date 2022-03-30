#include <iostream>
#include <vector>
#include <queue>
#define INF 1E18
#define ll long long
 
using namespace std;
 
int main() {
	ll n, m;
	cin >> n >> m;
 
	vector<pair<ll,ll>> adj[100005];
 
	for(ll i = 0; i < m; i++) {
		ll a, b, w;
		cin >> a >> b >> w;
		adj[a].push_back({b,w});
	}

	ll distance[100005];
	bool processed[100005];
	priority_queue<pair<ll,ll>> q;
 
	for(ll i = 1; i <= n; i++) {
		distance[i] = INF;
		processed[i] = false;
	}
	distance[1] = 0;
	q.push({0,1});
	while(!q.empty()) {
		ll a = q.top().second; q.pop();
		if(processed[a]) continue;
		processed[a] = true;
		for(auto u : adj[a]) {
			ll b = u.first, w = u.second;
			if(distance[a] + w < distance[b]) {
				distance[b] = distance[a] + w;
				q.push({-distance[b], b});
			}
		}
	}
 
	for(ll i = 1; i <= n; i++) {
		cout << distance[i] << " ";
	}
	return 0;
}

