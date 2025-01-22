#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> g(n);
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    vector<int> dist(n, -1);
    queue<int> que;
    
    dist[0] = 0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : g[v]){
            if(dist[nv] == -1){
                dist[nv] = dist[v] + 1;
                que.push(nv);
            }
        }
    }

    for(int i = 0; i < q; i++){
        int c, d;
        cin >> c >> d;
        c--, d--;
        cout << (dist[c] % 2 == dist[d] % 2 ? "Town\n" : "Road\n");
    }
    return 0;
}