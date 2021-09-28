#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long

int main() {

	ll n, x, i1, i2;
	bool flag = false;
	cin >> n >> x;

	map<int, int> numbers;
	int a;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(numbers.find(x-a) != numbers.end()) {
			cout << numbers[x-a] + 1 << " " << i + 1 << endl;
			return 0;
		}
		numbers[a] = i;
	}
	cout << "IMPOSSIBLE" << endl;
}
