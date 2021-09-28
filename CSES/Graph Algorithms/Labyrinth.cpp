#include <iostream>
#include <queue>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

const int mxN = 1e3, mxM = 1e3, movex[4] = {1,0,-1,0}, movey[4] = {0,1,0,-1}; //U, R, D, L
const char movec[4] = {'R', 'D', 'L', 'U'};
int n, m, si, sj, ei, ej;
string labyrinth[mxN];
string paths[mxN]; 

bool possible(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m && labyrinth[x][y] == '.'; 
}

int main() {
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		cin >> labyrinth[i];
	}	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(labyrinth[i][j] == 'A') {
				si = i;
				sj = j;
				labyrinth[i][j] = '.';
			}
			if(labyrinth[i][j] == 'B') {
				ei = i;
				ej = j;
				labyrinth[i][j] = '.';
			}
		}
		paths[i] = string(m,' ');
	}
	
	queue<array<int,2>> q;
	q.push({si,sj});
	labyrinth[si][sj] = '#';
	while(!q.empty()) {
		//cout << si << sj << endl;
		array<int,2> coords = q.front();
		q.pop();
		//cout << "Coordinates: " << coords[0] << " " << coords[1] << endl;
		for(int i = 0; i < 4; i++) {
			int ni = coords[0] + movey[i], nj = coords[1] + movex[i];
			//cout << "i: " << ni << ", j: " << nj << endl;
			//cout << "Movement" << movec[i] << endl;
			if(!possible(ni, nj)) {
				//cout << "NOT POSIBLE" << endl;
				continue;
			}
			labyrinth[ni][nj] = '#';
			q.push({ni,nj});
			paths[ni][nj] = movec[i];
		}
	}

	/*for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << paths[i][j];
		}
		cout << endl;
	}*/
	if(paths[ei][ej] != ' ') {
		int ni = ei;
		int nj = ej;
		//cout << "Destiny " << si << " " << sj;
		string result = "";
		while(ni != si || nj != sj) {
			result += paths[ni][nj];
			//cout << "Current " << ni << " " << nj << endl;
			if(paths[ni][nj] == 'U') {
				ni += 1;
			}
			else if(paths[ni][nj] == 'L') {
				nj += 1;
			}
			else if(paths[ni][nj] == 'D') {
				ni -= 1;
			}
			else if(paths[ni][nj] == 'R') {
				nj -= 1;
			}
			//cout << "Next: " << ni << " " << nj <<paths[ni][nj] <<endl;
		}
		reverse(result.begin(), result.end());
		cout << "YES" << endl;
		cout << result.size() << endl;
		cout << result << endl;
	} else {
		cout << "NO";
	}
	return 0;
}
