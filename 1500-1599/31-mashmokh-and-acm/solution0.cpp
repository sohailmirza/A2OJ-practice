#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

ll f(int n, int k, vector<vector<ll> > &dp, unordered_map<int, vector<int>> &div) {
	if(k <= 1) return 1ll;
	
	if(dp[n][k] != -1) return dp[n][k];
	ll x = 0ll;
	
	for(int i: div[n]) {
		x = (x + f(i, k - 1, dp, div)) % MOD;
	}
	
	dp[n][k] = x;
	return x;
}

void solve() {
	int n, k;
	cin >> n >> k;
	vector<vector<ll> > dp(n + 1, vector<ll>(k + 1, -1));
	ll ans = 0ll;
	unordered_map<int, vector<int> > mp;
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j * j <= i; ++j) {
			int a = j, b = i / j;
			if(i % j == 0) {
				mp[i].push_back(a);
				if(a != b) mp[i].push_back(b);
			}
		}
	}
	
	for(int i = 1; i <= n; ++i) {
		ans = (ans + f(i, k, dp, mp)) % MOD;
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
