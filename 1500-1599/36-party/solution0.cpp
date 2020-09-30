#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<vector<int> > G(n + 1);
	queue<int> q;
	for(int i = 1; i <= n; ++i) {
		int x;
		cin >> x;
		if(x != -1) {
			G[x].push_back(i);
		} else {
			q.push(i);
		}
	}
	int ans = 0;
	while(q.size()) {
		ans++;
		int c = q.size();
		while(c--) {
			int x = q.front();
			q.pop();
			for(int v: G[x]) {
				q.push(v);
			}
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
