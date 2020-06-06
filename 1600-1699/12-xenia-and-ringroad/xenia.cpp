// https://codeforces.com/problemset/problem/339/B

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

ll solve(int n, int m, vector<int> &A) {
    int prev = 1;
    ll ans = 0;
    for(int i = 0; i < m; i++) {
        ans += (A[i] - prev + n) % n;    
        prev = A[i];
    }
    return ans;
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> A(m);
    for(int i = 0; i < m; i++) cin >> A[i];
    cout << solve(n, m, A);
    return 0;
}
