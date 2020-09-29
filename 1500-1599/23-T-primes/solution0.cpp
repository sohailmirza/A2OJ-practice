#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve(unordered_set<ll> &prime) {
	ll n;
	cin >> n;
	if(prime.find(n) != prime.end()) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<bool> primes(1000001, true);
	primes[1] = false;
	for(int i = 2; i * i <= 1000000; ++i) {
		if(!primes[i]) continue;
		for(int j = i * i; j <= 1000000; j += i) {
			primes[j] = false;
		}
	}
	
	unordered_set<ll> prime;
	for(ll i = 2; i <= 1000000; ++i) {
		if(primes[i]) prime.insert(i * i);
	}
	
	int testcases = 1;
	cin >> testcases;
	
	while(testcases--) {
		solve(prime);
	}
	
	return 0;
}
