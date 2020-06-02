// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

int main() {

    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, sum = 0;
        cin >> a; sum += a;
        cin >> a; sum += a;
        cin >> a; sum += a;
        if(sum >= 2) ans++;
    }
    cout << ans << "\n";
    
    return 0;
}
