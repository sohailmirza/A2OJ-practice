#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

bool comp(const pair<pair<int, int>, int> &a, const pair<pair<int, int>, int> &b) {
	if(a.first.first == b.first.first) return a.first.second < b.first.second;
	return a.first.first > b.first.first;
}

void solve() {
	int n;
	cin >> n;
	vector<pair<pair<int, int>, int> > g;
	for(int i = 1; i <= n; ++i) {
		int a, b;
		cin >> a >> b;
		g.push_back({{b, a}, i});
	}
	sort(g.begin(), g.end(), comp);
	int k;
	cin >> k;
	vector<pair<int, int> > tab;
	for(int i = 1; i <= k; ++i) {
		int x;
		cin >> x;
		tab.push_back({x, i});
	}
	sort(tab.begin(), tab.end());
	int a = 0, b = 0;
	vector<int> ans(n + 1, -1);
	vector<bool> visited(k + 1, false);
	for(pair<pair<int, int>, int> i: g) {
		for(pair<int, int> j: tab) {
			if(!visited[j.second] && i.first.second <= j.first) {
				a++;
				b += i.first.first;
				ans[i.second] = j.second;
				visited[j.second] = true;
				break;
			}
		}
	}
	cout << a << " " << b << "\n";
	for(int i = 1; i <= n; ++i) {
		if(ans[i] != -1) {
			cout << i << " " << ans[i] << "\n";
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
