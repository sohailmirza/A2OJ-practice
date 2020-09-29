#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<unordered_set<int> > G(n + 1);
	vector<int> cost0(n + 1, 0), cost1(n + 1, 0);
	for(int i = 1; i <= n; ++i) cin >> cost0[i];
	for(int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		G[u].insert(v);
		G[v].insert(u);
		cost1[u] += cost0[v];
		cost1[v] += cost0[u];
	}
	priority_queue<pair<int, int>> pq;
	for(int i = 1; i <= n; ++i) {
		pq.push({cost0[i], i});
	}
	int ans = 0;
	while(!pq.empty()) {
		pair<int, int> p = pq.top();
		pq.pop();
		ans += cost1[p.second];
		for(auto it: G[p.second]) {
			cost1[it] -= p.first;
			G[it].erase(p.second);
		}
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
