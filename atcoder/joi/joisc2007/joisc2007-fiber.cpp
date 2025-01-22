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
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> seen(n, -1);
    queue<int> que;
    for(int i = 0; i < n; i++){
        if(seen[i] != -1) continue;

        que.push(i);
        seen[i] = i;
        while(!que.empty()){
            int v = que.front();
            que.pop();
            for(int nv : g[v]){
                if(seen[nv] != -1) continue;

                seen[nv] = seen[v];
                que.push(nv);
            }
        }
    }

    set<int> num;
    for(int i = 0; i < n; i++) num.insert(seen[i]);

    int ans = (int)num.size() - 1;
    cout << ans << "\n";
    return 0;
}
