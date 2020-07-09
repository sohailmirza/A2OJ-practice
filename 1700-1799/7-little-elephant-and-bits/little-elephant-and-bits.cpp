#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
    bool flag = true;
    string ans = "";
    for(int i = 0; i < n; i++) {
        if(flag && s[i] == '0') {
            flag = false;
            continue;
        }
        ans += s[i];
    }
    if(flag) ans.pop_back();
    n--;
    for(int i = 0; i < n / 2; i++) {
        swap(ans[i], ans[n - i - 1]);
    }
    for(int i = n - 1; i >= 0; i--) {
        if(ans.back() == '0') ans.pop_back();
        else break;
    }
    n = ans.size();

    for(int i = 0; i < n / 2; i++) {
        swap(ans[i], ans[n - i - 1]);
    }

    if(ans.length() == 0) cout << "0";
    else cout << ans;
    return 0;
}
