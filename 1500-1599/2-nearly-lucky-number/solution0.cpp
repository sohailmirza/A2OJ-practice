#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	ll n;
	int f = 0;
	cin >> n;
	while(n) {
		int x = n % 10;
		if(x == 4 || x == 7) f++;
		n /= 10;
	}
	if(f == 4 || f == 7) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
