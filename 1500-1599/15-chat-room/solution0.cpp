#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	string f = "hello";
	int n = s.length(), j = 0;
	for(int i = 0; i < n; ++i) {
		if(s[i] == f[j]) j++;
		if(j == 5) {
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
