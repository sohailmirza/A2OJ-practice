#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int m = max(3 * a / 10, a - (a / 250) * c);
	int v = max(3 * b / 10, b - (b / 250) * d);
	if(m > v) cout << "Misha";
	else if(m < v) cout << "Vasya";
	else cout << "Tie";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
