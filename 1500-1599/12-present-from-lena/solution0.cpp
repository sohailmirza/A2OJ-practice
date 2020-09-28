#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<vector<int> > v(2 * n + 1, vector<int>(2 * n + 1, -1));
	for(int i = 0; i <= n; ++i) {
		int p1 = n - i, p2 = n + i, start = 0;
		bool flag = false;
		for(int j = p1; j <= p2; ++j) {
			v[i][j] = start;
			if(start >= i) flag = true;
			if(flag) start--;
			else start++;
		}
	}
	for(int i = 0; i <= n; ++i) {
		bool flag = false;
		for(int j = 0; j < 2 * n + 1; ++j) {
			if(v[i][j] == -1) {
				if(flag) break;
				cout << "  ";
			} else {
				flag = true;
				cout << v[i][j];
				if(j < 2 * n && v[i][j + 1] != -1) cout << " ";
			}
		}
		cout << "\n";
	}
	for(int i = n - 1; i >= 0; --i) {
		bool flag = false;
		for(int j = 0; j < 2 * n + 1; ++j) {
			if(v[i][j] == -1) {
				if(flag) break;
				cout << "  ";
			} else {
				flag = true;
				cout << v[i][j];
				if(j < 2 * n && v[i][j + 1] != -1) cout << " ";
			}
		}
		cout << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
