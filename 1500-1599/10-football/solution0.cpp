#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	int curr = 1;
	for(int i = 1; i < (int)s.length(); ++i) {
		if(s[i] == s[i - 1]) curr++;
		else curr = 1;
		if(curr >= 7) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
