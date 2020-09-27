#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	int sum = 0, ans = 0;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		sum = sum - a + b;
		ans = max(ans, sum);
	}
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
