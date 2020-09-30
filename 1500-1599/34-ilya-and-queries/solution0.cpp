#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	vector<int> a(n + 1, 0);
	int x = 0;
	for(int i = 1; i < n; ++i) {
		if(s[i] == s[i - 1]) {
			x++;
		}
		a[i + 1] = x;
	}
	int q;
	cin >> q;
	while(q--) {
		int u, v;
		cin >> u >> v;
		cout << a[v] - a[u] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
