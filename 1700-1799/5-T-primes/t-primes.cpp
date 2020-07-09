#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;
 


int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	
    vector<bool> primes(1000001, true);
    for(int p = 2; p * p <= 1000000; p++) {
        if(primes[p]) {
            for(int j = p * p; j <= 1000000; j += p) {
                primes[j] = false;
            }
        }
    }

    unordered_set<ll> prime;
    for(ll i = 2; i <= 1000000; i++) {
        if(primes[i]) {
            prime.insert(i * i);
        }
    }

    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) {
        if(prime.find(v[i]) == prime.end()) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
