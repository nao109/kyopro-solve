#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<vector<int>> g(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i][j] == 'Y') g[i].push_back(j);
        }
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int j, k;
        cin >> j >> k;
        j--, k--;
        
        vector<int> dist(n, -1), value(n, -1);
        queue<int> que;
        dist[j] = 0;
        value[j] = a[j];
        que.push(j);

        while(!que.empty()){
            int v = que.front();
            que.pop();
            for(int nv : g[v]){
                if(dist[nv] == -1){
                    dist[nv] = dist[v] + 1;
                    value[nv] = value[v] + a[nv];
                    que.push(nv);
                }
                else if(dist[nv] == dist[v] + 1){
                    value[nv] = max(value[nv], value[v] + a[nv]);
                }
            }
        }

        if(dist[k] == -1) cout << "Impossible\n";
        else cout << dist[k] << " " << value[k] << endl;
    }
    return 0;
}