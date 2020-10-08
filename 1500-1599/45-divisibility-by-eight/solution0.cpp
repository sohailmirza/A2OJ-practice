#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

int f(int n, int m, string &s, string &x, vector<vector<int> > &dp) {
	if(n < 0 || m < 0) return 0;
	if(dp[n][m] != -1) return dp[n][m];
	int ans = 0;
	if(s[n] == x[m]) {
		ans = 1 + f(n - 1, m - 1, s, x, dp);
	} else {
		ans = max(f(n - 1, m, s, x, dp), f(n, m - 1, s, x, dp));
	}
	dp[n][m] = ans;
	return ans;
}

void solve() {
	string s;
	cin >> s;
	int n = (int)s.length();
	for(int i = 0; 8 * i < 1000; ++i) {
		string x = to_string(8 * i);
		int m = (int)x.length();
		vector<vector<int> > dp(n, vector<int>(m, -1));
		if(f(n - 1, m - 1, s, x, dp) == m) {
			cout << "YES\n" << x;
			return;
		}
	}
	cout << "NO";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
