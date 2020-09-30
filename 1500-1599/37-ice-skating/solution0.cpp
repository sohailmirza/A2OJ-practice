#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void dfs(int u, vector<bool> &visited, vector<vector<int> > &G) {
	if(visited[u]) return;
	visited[u] = true;
	for(int v: G[u]) {
		dfs(v, visited, G);
	}
}

void solve() {
	int n;
	cin >> n;
	vector<pair<int, int> > v;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	vector<vector<int> > G(n);
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(v[i].first == v[j].first || v[i].second == v[j].second) {
				G[i].push_back(j);
				G[j].push_back(i);
			}
		}
	}
	vector<bool> visited(n, false);
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		if(!visited[i]) {
			ans++;
			dfs(i, visited, G);
		}
	}
	cout << ans - 1;	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
