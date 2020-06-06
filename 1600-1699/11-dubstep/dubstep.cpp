// https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

string dubstep(string &s) {
    string original = "";
    int n = s.size();
    for(int i = 0; i < n; i++) {
        string temp = "";
        for(int j = i; j < min(i + 3, n); j++) temp += s[j];
        if(temp == "WUB") {
            if(original.length() && original[original.length() - 1] != ' ') original += ' ';
            i += 2;
        } else {
            original += s[i];
        }
    }
    return original;
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << dubstep(s) << "\n";
    return 0;
}
