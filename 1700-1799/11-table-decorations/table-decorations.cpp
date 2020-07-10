#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll f = 0;
    vector<ll> a(3);
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
        f += a[i];
    }
    f /= 3;
    sort(a.begin(), a.end());
    if(a[0] + a[1] < f) cout << a[0] + a[1];
    else cout << f;

    return 0;
}
