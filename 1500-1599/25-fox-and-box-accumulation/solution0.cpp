#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

bool valid(vector<int> &v, int k, int n) {
	for(int i = 0; i < n; ++i) {
		if(i / k > v[i]) return false;
	}
	return true;
}

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i) cin >> v[i];
	sort(v.begin(), v.end());
	int lo = 1, hi = n, ans = -1;
	while(lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if(valid(v, mid, n)) {
			ans = mid;
			hi = mid - 1;
		} else {
			lo = mid + 1;
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
