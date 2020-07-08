#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
int M = 1e9+7;
 
int main() {
   
    //Fast IO crap
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	
    int n;
    cin >> n;
    vector<vector<int>> ans(n, vector<int>(n));
    vector<int> index(n);
    int f = 0;
    for(int i = 0; i < n; i++) {
    	index[i] = f;
    	f += n + 1;
    }

    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++) {
    		ans[i][j] = index[j] + 1;
    		index[j] = ((index[j] + 1) % n) + n * j;
    		cout << ans[i][j] << " ";
    	}
    	cout << "\n";
    }

    return 0;
}
