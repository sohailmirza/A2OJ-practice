#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void build(vector<ll> &tree, vector<int> &a, int node, int l, int r) {
	if(l > r) return;
	if(l == r) {
		tree[node] = a[l];
		return;
	}
	int mid = l + (r - l) / 2;
	build(tree, a, 2 * node, l, mid);
	build(tree, a, 2 * node + 1, mid + 1, r);
	tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

void update(vector<ll> &tree, vector<ll> &lazy, int node, int l, int r, int s, int e, ll x) {
	if(lazy[node] != -1) {
		tree[node] = max(tree[node], lazy[node]);
		lazy[2 * node] = max(lazy[node], lazy[2 * node]);
		lazy[2 * node + 1] = max(lazy[node], lazy[2 * node + 1]);
		
		lazy[node] = -1;
	}
	if(r < s || e < l) return;
	
	if(s <= l && r <= e) {
		tree[node] = max(tree[node], x);
		if(l != r) {
			lazy[2 * node] = max(lazy[2 * node], x);
			lazy[2 * node + 1] = max(lazy[2 * node + 1], x);
		}
		return;
	}
	int mid = l + (r - l) / 2;
	update(tree, lazy, 2 * node, l, mid, s, e, x);
	update(tree, lazy, 2 * node + 1, mid + 1, r, s, e, x);
	tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

ll query(vector<ll> &tree, vector<ll> &lazy, int node, int l, int r, int s, int e) {
	if(l == r) {
		if(lazy[node] != -1) {
			tree[node] = lazy[node];
			lazy[node] = -1;
		}
		if(s <= l && r <= e) return tree[node];
		return 0;
	}
	if(lazy[node] != -1) {
		lazy[2 * node] = max(lazy[node], lazy[2 * node]);
		lazy[2 * node + 1] = max(lazy[node], lazy[2 * node + 1]);
		tree[node] = lazy[node];
		lazy[node] = -1;
	}
	if(r < s || e < l) return 0;
	if(s <= l && r <= e) {
		return tree[node];
	}
	int mid = l + (r - l) / 2;
	return max(query(tree, lazy, 2 * node, l, mid, s, e), query(tree, lazy, 2 * node + 1, mid + 1, r, s, e));
	
}

void solve() {
	int n;
	cin >> n;
	int size = 2 * pow(2, ceil(log2(n)));
	vector<ll> tree(size + 1, 0), lazy(size + 1, -1);
	vector<int> a(n + 1);
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	build(tree, a, 1, 1, n);
	int m;
	cin >> m;
	for(int i = 0; i < m; ++i) {
		ll e, x;
		cin >> e >> x;
		ll f = query(tree, lazy, 1, 1, n, 1, e);
		cout << f << "\n";
		update(tree, lazy, 1, 1, n, 1, e, f + x);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
