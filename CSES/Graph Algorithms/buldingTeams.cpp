#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
map<int,vector<int>> friendships;
vector<bool> visited;
vector<int> colors;
bool impossible = false;
 
void printVector(vector<int> v) {
	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}
 
void dfs(int node, int color) {
	//cout << "Visiting node " << node << endl;
	colors[node] = color;
	//cout << "Colors" << endl;
	//printVector(colors);
	//cout << endl;
	visited[node] = true;
	vector<int> friends = friendships[node];
	if(color == 1) {
		color = 2;
	} else {
		color = 1;
	}
	//cout << "Friends must be of color " << color << endl;
	for(int i = 0; i < friends.size(); i++) {
		//cout << "Visiting friends: "; printVector(friends); cout << endl;
		if(!visited[friends[i]]) {
			dfs(friends[i], color);
		} else { //If node has been visited check if there's color inconsistency
			//cout << "Already visited node " << i << endl;
			if(color != colors[friends[i]]) {
				//cout << "Inconsistency, coloring should be " << color << "but it's colored as " << colors[friends[i]] << endl;
				impossible = true;
			}
		}
	}
}
 
 
int main() {
	int n, m;
	cin >> n >> m;
 
	for(int i = 0; i < m; i++) {
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		friendships[a].push_back(b);
		friendships[b].push_back(a);
	}
	
	for(int i = 0; i < n; i++) visited.push_back(false);
	for(int i = 0; i < n; i++) colors.push_back(-1);
	
	/*
	for(auto f : friendships) {
		cout << f.first << " -> ";
		for(auto v : f.second) {
			cout << v << ", ";
		}
		cout << endl;
	}
	*/
	
	for(int i = 0; i < n; i++) {
		if(!visited[i] && !impossible) {
			dfs(i,1);
		}	
	}
	if(impossible) {
		cout << "IMPOSSIBLE";
	} else {
		for(int i = 0; i < n; i++) cout << colors[i] << " ";
	}
	
	return 0;
}
