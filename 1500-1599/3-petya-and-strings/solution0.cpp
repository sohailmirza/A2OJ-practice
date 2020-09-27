#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < (int)a.length(); ++i) {
		if(tolower(a[i]) < tolower(b[i])) {
			cout << "-1";
			return;
		}
		if(tolower(a[i]) > tolower(b[i])) {
			cout << "1";
			return;
		}
	}
	cout << "0";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
