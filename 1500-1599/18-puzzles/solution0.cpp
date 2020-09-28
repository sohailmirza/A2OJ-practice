#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	for(int i = 0; i < m; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	int p1 = 0, p2 = n - 1;
	int ans = INF;
	while(p2 < m) {
		ans = min(ans, a[p2] - a[p1]);
		p2++; p1++;
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
