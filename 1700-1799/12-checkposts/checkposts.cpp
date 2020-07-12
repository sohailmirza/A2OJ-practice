#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;

void dfs(int u, stack<int> &st, vector<bool> &visited, vector<vector<int> > &G) {
    if(visited[u]) return;
    visited[u] = true;
    for(int v: G[u]) {
        dfs(v, st, visited, G);
    }
    st.push(u);
}

void dfs2(int u, vector<int> &cost, vector<bool> &visited, ll &ans, unordered_map<int, ll> &freq, vector<vector<int> > &G) {
    if(visited[u]) return;
    visited[u] = true;
    freq[cost[u]]++;
    if(ans > cost[u]) ans = cost[u];
    for(int v: G[u]) {
        dfs2(v, cost, visited, ans, freq, G);
    }
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> cost(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        cin >> cost[i];
    }
    int m;
    cin >> m;
    vector<vector<int> > G(n + 1);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
    }

    stack<int> st;
    vector<bool> visited(n + 1, false);
    for(int i = 1; i <= n; i++) {
        dfs(i, st, visited, G);
    }

    vector<vector<int> > tG(n + 1);
    for(int i = 1; i <= n; i++) {
        for(int u: G[i]) {
            tG[u].push_back(i);
        }
    }

    visited = vector<bool>(n + 1, false);

    ll ans = 0, ways = 1ll;

    while(st.size()) {
        int u = st.top();
        st.pop();
        if(!visited[u]) {
            unordered_map<int, ll> freq;
            ll a = INT_MAX;
            dfs2(u, cost, visited, a, freq, tG);
            ans += a;
            ways = (ways * freq[a]) % M;
        }
    }

    cout << ans << " " << ways;

    return 0;
}
