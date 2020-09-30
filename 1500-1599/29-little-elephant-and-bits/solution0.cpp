#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	int idx = 0;
	for(int i = 0; i < (int)s.length(); ++i) {
		if(s[i] == '0') {
			idx = i;
			break;
		}
	}
	for(int i = 0; i < (int)s.length(); ++i) {
		if(i != idx) cout << s[i];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
