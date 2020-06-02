// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

int main() {

    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin >> input;

    unordered_set<char> dict;
    for(char ch: input) dict.insert(ch);

    if(dict.size() & 1) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";


    return 0;
}
