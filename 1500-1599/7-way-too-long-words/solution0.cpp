#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	int n = (int)s.length();
	if(n <= 10) {
		cout << s << "\n";
		return;
	}
	cout << s[0] << to_string(n - 2) << s[n - 1] << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int testcases = 1;
	cin >> testcases;
	
	while(testcases--) {
		solve();
	}
	
	return 0;
}
