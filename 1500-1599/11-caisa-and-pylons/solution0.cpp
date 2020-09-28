#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	int cost = 0, energy = 0, curr = 0;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		energy += curr - x;
		if(energy < 0) {
			cost -= energy;
			energy = 0;
		}
		curr = x;
	}
	cout << cost;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
