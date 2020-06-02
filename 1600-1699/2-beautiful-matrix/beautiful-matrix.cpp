// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

int main() {

    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int row, col;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            int x;
            cin >> x;
            if(x == 1) {
                row = i;
                col = j;
            }
        }
    }
    
    cout << abs(row - 3) + abs(col - 3) << "\n";

    return 0;
}
