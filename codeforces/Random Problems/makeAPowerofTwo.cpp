#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MAX 10000000000

int main() {

	vector<string> powers;
	int index= 0;
	for(ll i = 1; i < MAX; i*=2) {
		powers.push_back(to_string(i));
	//	cout << powers[index] << endl;
		index++;
	}
	
	for(int index = 0; index < powers.size(); index++) {
		cout << powers[index] << endl;
		
	}
	
	
	
	
	
	return 0;
}
