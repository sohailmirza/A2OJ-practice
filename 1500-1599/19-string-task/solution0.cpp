#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

bool isVowel(char c) {
	c = tolower(c);
	return (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i');
}

void solve() {
	string s;
	cin >> s;
	string ans = "";
	for(int i = 0; i < (int)s.length(); ++i) {
		if(!isVowel(s[i])) {
			ans += '.';
			ans += tolower(s[i]);
		}
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
