#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

#define ll long long

const int mxN = 2*10e5;
array<int,2> movies[mxN];

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> movies[i][1] >> movies[i][0];
	}

	sort(movies, movies + n);
	/*
	for(int i = 0; i < n; i++) {
		cout << movies[i][0] << " " << movies[i][1] << endl;
	}
	*/
	int total = 0, left = 0;
	for(int i = 0; i < n; i++) {
		if(movies[i][1] >= left) {// If beginning of movie is after last finishing time
			left = movies[i][0]; // New finishing time is the ending of the last movie
			total++;
		}
	}
	
	cout << total;
	return 0;
}
