#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
	string a, b, c;
	cin >> a >> b >> c;
	vector<int> freq(26, 0);
	for(char ch: a) freq[ch - 'A']++;
	for(char ch: b) freq[ch - 'A']++;
	for(char ch: c) freq[ch - 'A']--;
	for(int f: freq) {
		if(f != 0) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
