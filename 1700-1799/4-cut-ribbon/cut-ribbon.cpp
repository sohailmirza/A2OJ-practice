#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;
 
int f(int n, int a, int b, int c, vector<int> &dp) {
    if(n < 0) return -100000000;
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];
    int x = max(f(n - a, a, b, c, dp), max(f(n - b, a, b, c, dp), f(n - c, a, b, c, dp))) + 1;
    dp[n] = x;
    return x;
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, -1);
    cout << f(n, a, b, c, dp);

    return 0;
}
