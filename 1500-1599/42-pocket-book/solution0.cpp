#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> v(n);
	for(int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	ll ans = 1ll;
	for(int i = 0; i < m; ++i) {
		ll x = 0;
		unordered_set<char> us;
		for(int j = 0; j < n; ++j) {
			us.insert(v[j][i]);
		}
		x = (ll)us.size();
		ans = (ans * x) % MOD;
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
