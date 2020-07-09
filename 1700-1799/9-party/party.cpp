#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

int dfs(int u, vector<vector<int> > &G, vector<bool> &visited) {
    if(visited[u]) return 0;
    int ans = 0;
    visited[u] = true;
    for(int v: G[u]) {
        if(!visited[v]) ans = max(ans, 1 + dfs(v, G, visited));
    }
    return ans;
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> check;
    vector<vector<int> > G(n + 1);
    for(int i = 1; i <= n; i++) {
        int u;
        cin >> u;
        if(u == -1) {
            check.push_back(i);
            continue;
        }
        G[i].push_back(u);
        G[u].push_back(i);
    }

    vector<bool> visited(n + 1, false);
    int ans = 0;
    for(int i = 0; i < check.size(); i++) {
        ans = max(ans, dfs(check[i], G, visited));
    }

    cout << ans + 1;

    return 0;
}
