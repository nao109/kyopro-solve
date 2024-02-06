#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> in(n);
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        in[b]++;
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        vector<bool> seen(n, false);
        queue<int> que;
        seen[i] = true;
        que.push(i);
        while(!que.empty()){
            int v = que.front();
            que.pop();
            seen[v] = true;
            for(int nv : g[v]){
                if(!seen[nv]) que.push(nv);
            }
        }

        for(int i = 0; i < n; i++){
            if(seen[i]) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}