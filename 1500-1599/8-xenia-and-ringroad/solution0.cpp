#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<ll> a(m);
	for(int i = 0; i < m; ++i) {
		cin >> a[i];
	}
	ll ans = 0, curr = 1;
	for(int i = 0; i < m; ++i) {
		if(a[i] < curr) {
			ans += n;
		}
		curr = a[i];
	}
	ans += curr - 1;
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
