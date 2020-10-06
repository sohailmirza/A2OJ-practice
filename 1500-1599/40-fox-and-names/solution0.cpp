#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	vector<vector<char> > G(26);
	vector<int> indegree(26, 0);
	
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			int a = (int)v[i].length();
			int b = (int)v[j].length();
			bool f = false;
			for(int k = 0; k < min(a, b); ++k) {
				if(v[i][k] == v[j][k]) continue;
				f = true;
				G[v[i][k] - 'a'].push_back(v[j][k] - 'a');
				indegree[v[j][k] - 'a']++;
				break;
			}
			if(!f && a > b) {
				cout << "Impossible\n";
				return;
			}
		}
	}
	
	queue<int> q;
	for(int i = 0; i < 26; ++i) {
		if(indegree[i] == 0) {
			q.push(i);
		}
	}
	
	string ans = "";
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		ans += u + 'a';
		for(int w: G[u]) {
			indegree[w]--;
			if(indegree[w] == 0) q.push(w);
		}
	}
	if((int)ans.length() == 26) {
		cout << ans;
	} else {
		cout << "Impossible";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
