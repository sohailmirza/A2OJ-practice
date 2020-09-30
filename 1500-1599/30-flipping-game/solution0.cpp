#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	int c = 0;
	for(int i = 0; i < n; ++i) {
		cin >> v[i];
		if(v[i] == 1) c++;
	}
	int ans = 0;
	
	for(int i = 0; i < n; ++i) {
		int a = 0, b = 0;
		for(int j = i; j < n; ++j) {
			if(v[j] == 1) {
				a++;
			} else {
				b++;
			}
			ans = max(ans, c - a + b);
		}
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
