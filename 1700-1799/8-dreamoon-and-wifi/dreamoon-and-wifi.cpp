#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

int f(int n, int r, vector<vector<int> > &dp) {
    if(n < 0 || r < 0) return 0;
    if(dp[n][r] != -1) return dp[n][r];
    if(n == 0 && r == 0) return 1;
    int x = f(n - 1, r - 1, dp) + f(n, r - 1, dp);
    dp[n][r] = x;
    return x;
}

int main() {
   
    //Fast IO crap
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    vector<vector<int> > dp(21, vector<int>(11, -1));

    int n = s1.length();

    int a = 0;
    for(int i = 0; i < n; i++) {
        if(s1[i] == '+') a++;
        // else a--;
    }

    int b = 0;
    int x = 0;
    for(int i = 0; i < n; i++) {
        if(s2[i] == '+') b++;
        else if(s2[i] == '?') x++;
    }

    int y = abs(a - b);

    double ans = 0;
    if(a < b) {
        printf("%.12lf", ans);
        return 0;
    }
    
    ans = (double)(f(y, x, dp));
    ans = ans / pow(2, x);

    printf("%.12lf", ans);

    return 0;
}
