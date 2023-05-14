#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, x, y;
    cin >> n >> x >> y;

    vector<vector<int>> g(n);
    for(int i = 0; i < n - 1; i++){
        g[i].push_back(i + 1);
        g[i + 1].push_back(i);
    }
    g[x - 1].push_back(y - 1);
    g[y - 1].push_back(x - 1);

    vector<int> ans(n - 1, 0);

    for(int i = 0; i < n - 1; i++){
        vector<int> dist(n, -1);
        queue<int> que;
        dist[i] = 0;
        que.push(i);

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

        for(int j = i + 1; j < n; j++) ans[dist[j] - 1]++;
    }

    for(int i = 0; i < n - 1; i++) cout << ans[i] << endl;
    return 0;
}