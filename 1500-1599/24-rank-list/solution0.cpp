#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n, k;
	cin >> n >> k;
	map<pair<int, int>, int> mp;
	for(int i = 0; i < n; ++i) {
		int p, t;
		cin >> p >> t;
		t *= -1;
		mp[{p, t}]++;
	}
	int idx = 0;
	for(auto it = mp.rbegin(); it != mp.rend(); ++it) {
		idx += it -> second;
		if(idx >= k) {
			cout << it -> second;
			return;
		}
	}
	cout << "0";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
