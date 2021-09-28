#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
	int t, n;
	cin >> t;
	vector<int> v;
	int i = 0, c = 0;
	while(c<1000) {
		if(i%10 == 3 || i % 3 == 0){	
		} else {
			v.push_back(i);
			c++;
		}
		i++;
	}
	
	while(t--) {
		cin >> n;
		cout << v[n-1]<<endl;
	}
	
	return 0;
}
