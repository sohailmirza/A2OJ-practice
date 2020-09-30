#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

bool valid(int x, unordered_map<int, int> &mp) {
	if(x == 25) {
		return true;
	}
	bool ans = false;
	if(x == 50) {
		if(mp[25] >= 1) ans = true;
		mp[25]--;
	} else {
		if(mp[25] >= 1 && mp[50] >= 1) {
			ans = true;
			mp[25]--;
			mp[50]--;
		} else if(mp[25] >= 3) {
			ans = true;
			mp[25] -= 3;
		}
	}
	return ans;
}

void solve() {
	int n;
	cin >> n;
	unordered_map<int, int> mp;
	
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if(!valid(x, mp)) {
			cout << "NO\n";
			return;
		}
		mp[x]++;
	}
	cout << "YES\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
