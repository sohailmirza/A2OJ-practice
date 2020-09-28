#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int k;
	string s;
	cin >> k;
	cin >> s;
	int n = s.length();
	vector<int> freq(26, 0);
	for(int i = 0; i < n; ++i) {
		freq[s[i] - 'a']++;
	}
	string ans = "";
	for(int i = 0; i < 26; ++i) {
		if(freq[i] > 0) {
			if(freq[i] % k != 0) {
				cout << "-1";
				return;
			}
			int x = freq[i] / k;
			for(int j = 0; j < x; ++j) ans += (i + 'a');
		}
	}
	string x = ans;
	for(int i = 1; i < k; ++i) ans.append(x);
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
