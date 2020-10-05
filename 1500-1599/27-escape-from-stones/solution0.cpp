#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	vector<int> a;
	for(int i = 0; i < (int)s.length(); ++i) {
		if(s[i] == 'l') {
			a.push_back(i + 1);
		} else {
			cout << i + 1 << "\n";
		}
	}
	for(auto it = a.rbegin(); it != a.rend(); ++it) {
		cout << *it << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
