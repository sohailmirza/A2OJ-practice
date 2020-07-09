#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;
 
int di[4] = {0, 1, 0, -1};
int dj[4] = {1, 0, -1, 0};

void dfs(int u, vector<bool> &visited, vector<vector<int> > &points) {
    if(visited[u]) return;
    visited[u] = true;
    for(int i = 0; i < points.size(); i++) {
        if(points[i][0] == points[u][0] || points[i][1] == points[u][1]) {
            dfs(i, visited, points);
        }
    }
}

int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	
    int n;
    cin >> n;
    
    vector<vector<int> > points(n, vector<int>(2));
    vector<bool> visited(n, false);

    for(int i = 0; i < n; i++) {
        cin >> points[i][0] >> points[i][1];
    }

    int cc = 0;
    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            cc++;
            dfs(i, visited, points);
        }
    }

    cout << (cc - 1);
    return 0;
}
