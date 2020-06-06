// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;
 
ll solve(ll n, ll k) {
    if(k <= ceil((double)n / 2)) return 2 * k - 1;
    return 2 * (k - ceil((double)n / 2));
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    cout << solve(n, k) << "\n";
    return 0;
}
