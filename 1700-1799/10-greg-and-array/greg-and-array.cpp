#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> freq(m, 0ll);
    vector<vector<ll> > b(m, vector<ll>(3));
    for(int i = 0; i < m; i++) {
        cin >> b[i][0] >> b[i][1] >> b[i][2];
    }
    vector<ll> prefix(n, 0ll);
    for(int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        freq[x - 1]++;
        if(y == m) continue;
        freq[y]--;
    }
    for(int i = 1; i < m; i++) {
        freq[i] += freq[i - 1];
    }
    for(int i = 0; i < m; i++) {
        b[i][2] *= freq[i];
    }
    for(int i = 0; i < m; i++) {
        prefix[b[i][0] - 1] += b[i][2];
        if(b[i][1] == n) continue;
        prefix[b[i][1]] -= b[i][2];
    }
    for(int i = 1; i < n; i++) {
        prefix[i] += prefix[i - 1];
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] + prefix[i] << " ";
    }


    return 0;
}
