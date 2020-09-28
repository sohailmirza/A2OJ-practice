#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	if(n == 1) {
		cout << "1";
		return;
	}
	sum = (sum / 2);
	sort(a.begin(), a.end(), greater<int>());
	int sum1 = 0;
	for(int i = 0; i < n; ++i) {
		sum1 += a[i];
		if(sum1 > sum) {
			cout << i + 1;
			return;
		}
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
