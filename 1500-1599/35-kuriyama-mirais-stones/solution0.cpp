#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<ll> a(n), b(n);
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		a[i] = x;
		b[i] = x;
	}
	sort(b.begin(), b.end());
	for(int i = 1; i < n; ++i) {
		a[i] += a[i - 1];
		b[i] += b[i - 1];
	}
	int q;
	cin >> q;
	while(q--) {
		int x, u, v;
		cin >> x >> u >> v;
		if(x == 1) {
			if(u == 1) {
				cout << a[v - 1] << "\n";
			} else {
				cout << a[v - 1] - a[u - 2] << "\n";
			}
		} else {
			if(u == 1) {
				cout << b[v - 1] << "\n";
			} else {
				cout << b[v - 1] - b[u - 2] << "\n";
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
