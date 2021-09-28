#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t, iterations = 0;
	cin >> t;
	while(t--) {
		int n, iterations = 0;
		cin >> n;
		vector<int> arr, res;
		for(int i = 0; i <n; i++){
			int aux;
			cin >> aux;
			arr.push_back(aux);
			res.push_back(aux);
		}
		sort(res.begin(), res.end());
		int index;
		for(int i = 0; i < n; i++) {
			if(arr == res) {	
				break;
			}
			iterations += 1;
			if(i % 2 == 0) {
				index = 0; 
			} else {
				index = 1;
			}
			for(int j = index; j<n-1; j += 2) {
				if(arr[j+1] < arr[j]) {
					int aux = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = aux;
				}
			}
		}
		cout << iterations << endl;
	}
	
	return 0;
}
