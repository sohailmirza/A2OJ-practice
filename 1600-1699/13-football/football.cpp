// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

string solve(string &s) {
    int a = 0, b = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '0') {
            a++;
            b = 0;
        }
        else {
            b++;
            a = 0;
        }
        if(a == 7 || b == 7) return "YES";
    }
    return "NO";
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << solve(s);
    return 0;
}
