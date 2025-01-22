#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[b].push_back(a);
    }

    vector<int> candidates;
    for(int i = 0; i < n; i++){
        if(g[i].size() == 0) candidates.push_back(i);
    }

    cout << (candidates.size() == 1 ? candidates[0] : -1) << endl;
    return 0;
}