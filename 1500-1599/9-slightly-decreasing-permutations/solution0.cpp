#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n, k;
	cin >> n >> k;
	int p1 = 1, p2 = n;
	while(k--) {
		cout << p2 << " ";
		p2--;
	}
	for(int i = p1; i <= p2; i++) cout << i << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
