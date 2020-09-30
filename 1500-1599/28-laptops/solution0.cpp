#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

bool comp(const pair<int, int> &p1, const pair<int, int> &p2) {
	if(p1.first == p2.first) return p1.second < p2.second;
	return p1.first > p2.first;
}

void solve() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), comp);
	bool flag = false;
	for(int i = 1; i < n; ++i) {
		if(v[i].first < v[i - 1].first && v[i].second > v[i - 1].second) {
			flag = true;
			break;
		}
	}
	if(flag) cout << "Happy Alex";
	else cout << "Poor Alex";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
