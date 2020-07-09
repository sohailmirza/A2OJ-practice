#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;
 
int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	
    int n, m;
    cin >> n >> m;
    int mi = (n / 2) + (n % 2);
    int ma = n;
    for(int i = mi; i <= ma; i++) {
        if(i % m == 0) {
            cout << i;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}
