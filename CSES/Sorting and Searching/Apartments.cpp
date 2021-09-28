#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	lli n, m, k;
	cin >> n >> m >> k;			
	vector<lli> apartments, clients;
	
	for(lli i = 0; i < n; i++) {
		lli size;
		cin >> size;
		apartments.push_back(size);
	}
	
	for(lli i = 0; i < m; i++) {
		lli size;
		cin >> size;
		clients.push_back(size);
	}

	sort(apartments.begin(), apartments.end());	
	sort(clients.begin(), clients.end());
	/*
	cout << "Apartments:\n";
	for(lli i = 0; i < n; i++) {
		cout << apartments[i] << " ";
	}
	cout << "\nClients:\n";

	for(lli i = 0; i < m; i++) {
		cout << clients[i] << " ";
	}

	cout << "\n";
	*/

	lli client = 0, apartment = 0, pairings = 0;
	while (client < m && apartment < n) {
		if(abs(clients[client] - apartments[apartment]) <= k) {
			client += 1;
			apartment += 1;
			pairings += 1;
		}
		else {
			if(clients[client] > apartments[apartment]) {
				apartment += 1;
			}
			else {
				client += 1;
			}
		}
	}
	cout << pairings;
	return 0;
}
