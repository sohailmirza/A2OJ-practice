#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

ll f(int n, int a, int b, int c, vector<ll> &dp) {
	if(n < 0) return INT_MIN;
	if(n == 0) return 0;
	if(dp[n] != -1) return dp[n];
	ll x = INT_MIN;
	x = 1 + max(max(f(n - a, a, b, c, dp), f(n - b, a, b, c, dp)), f(n - c, a, b, c, dp));
	dp[n] = x;
	return x;
}

void solve() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	vector<ll> dp(n + 1, -1);
	cout << f(n, a, b, c, dp);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
