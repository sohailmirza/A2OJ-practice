// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;
 
int compare(string &s1, string &s2) {
    for(int i = 0; i < s1.length(); i++) {
        char a = tolower(s1[i]);
        char b = tolower(s2[i]);
        if(a > b) return 1;
        if(a < b) return -1;
    }
    return 0;
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    cout << compare(s1, s2);
    return 0;
}
