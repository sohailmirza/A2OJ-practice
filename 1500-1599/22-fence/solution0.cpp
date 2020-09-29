#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n + 1);
	for(int i = 1; i <= n; ++i) cin >> a[i];
	int sum = 0;
	int i = n;
	for(; i > n - k; --i) sum += a[i];
	int ans = sum, idx = n - k + 1;
	for(; i > 0; --i) {
		sum += a[i];
		sum -= a[i + k];
		if(ans >= sum) {
			ans = sum;
			idx = i;
		}
	}
	cout << idx;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
