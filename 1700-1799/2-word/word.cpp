#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

bool isUpper(char c) {
    return ('A' <= c && c <= 'Z');
} 

bool isLower(char c) {
    return ('a' <= c && c <= 'z');
} 

char toLower(char c) {
    return c + 'a' - 'A';
}

char toUpper(char c) {
    return c - 'a' + 'A';
}

void convertToLower(string &s, int n) {
    for(int i = 0; i < n; i++) {
        if(isUpper(s[i])) s[i] = toLower(s[i]);
    }
}

void convertToUpper(string &s, int n) {
    for(int i = 0; i < n; i++) {
        if(isLower(s[i])) s[i] = toUpper(s[i]);
    }
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	
    string s;
    cin >> s;
    int n = s.length();
    int lower = 0, upper = 0;
    for(int i = 0; i < n; i++) {
        if(isUpper(s[i])) upper++;
        else lower++;
    }
    if(lower >= upper) convertToLower(s, n);
    else convertToUpper(s, n);

    cout << s;

    return 0;
}
