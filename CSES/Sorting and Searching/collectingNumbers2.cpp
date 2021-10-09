#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, m;

	cin >> n >> m;
	map<int,int> x; 
	map<int,int> positions;
	for(int i = 0; i < n; i ++) {
		int aux;
		cin >> aux;
		x[aux] = i+1;
		positions[i+1] = aux;
	}
	int ans = 1;

	for(int i = 1; i < n; i++) {
		if(x[i]>x[i+1]) {
			ans += 1;
		}
	}
	for(int i = 0; i < m; i++) {
		int s1, s2, a1, a2;
		cin >> s1 >> s2;
		a1 = positions[s1];
		a2 = positions[s2];
		swap(positions[s1],positions[s2]);
		
		if(a1 < n && x[a1] > x[a1-1]) 
		
		//Swapping
		x[a1] = s2;
		x[a2] = s1;
		positions[s1] = a2;
		positions[s2] = a1;
	
		
		for(auto it : x) {
			cout << it.first << ":"  << it.second << " ";
		}

		cout << endl;
		cout << ans << endl;
	}
	return 0;
}
