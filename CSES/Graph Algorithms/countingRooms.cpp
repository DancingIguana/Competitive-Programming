#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> maze;
int n, m;

bool possible(int i, int j) {
	return i >= 0 && i < n && j >= 0 && j < m && maze[i][j] == '.';  
}

void dfs(int i, int j) {
	maze[i][j] = '#';
	if(possible(i-1,j)) {
		dfs(i-1,j);
	}
	if(possible(i+1, j)) {
		dfs(i+1,j);
	}
	if(possible(i,j-1)) {
		dfs(i,j-1);
	}
	if(possible(i,j+1)) {
		dfs(i,j+1);
	}
}

int main() {
	cin >> n >> m;
	int rooms = 0;

	for(int i = 0; i < n; i++) {
		string aux;
		cin >> aux;
		maze.push_back(aux);
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(possible(i,j)) {
				dfs(i,j);
				rooms += 1;
			}
		}
	}
	
	cout << rooms << endl;
	return 0;
}
