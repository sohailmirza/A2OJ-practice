#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; ++i) cin >> a[i];
	int start = 0, end = 0;
	unordered_map<int, int> mp;
	for(int i = 0; i < n; ++i) {
		mp[a[i]]++;
		if((int)mp.size() == k) {
			end = i;
			for(int j = start; j <= end; ++j) {
				if(mp[a[j]] > 1) {
					mp[a[j]]--;
					start = j + 1;
				} else {
					break;
				}
			}
			cout << start + 1 << " " << end + 1;
			return;
		}
	}
	cout << "-1 -1";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
