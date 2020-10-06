#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

int di[] = {0, 1, 0, -1};
int dj[] = {1, 0, -1, 0};

bool dfs(int i, int j, int n, int m, char color, vector<string> &G, vector<vector<bool> > &visited, int pi, int pj) {
	if(i < 0 || j < 0 || i >= n || j >= m || G[i][j] != color) return false;
	if(visited[i][j]) return true;
	visited[i][j] = true;
	bool ans = false;
	for(int k = 0; k < 4; ++k) {
		int a = i + di[k];
		int b = j + dj[k];
		if(a == pi && b == pj) continue;
		ans |= dfs(a, b, n, m, color, G, visited, i, j);
		if(ans) return ans;
	}
	return false;
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> G(n);
	for(int i = 0; i < n; ++i) {
		cin >> G[i];
	}
	vector<vector<bool> > visited(n, vector<bool>(m, false));
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if(!visited[i][j]) {
				if(dfs(i, j, n, m, G[i][j], G, visited, -1, -1)) {
					cout << "Yes";
					return;
				}
			}
		}
	}
	cout << "No";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
