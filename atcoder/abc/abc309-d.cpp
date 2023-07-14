#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const int INF = 1e9;
int main(){
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    vector<vector<int>> g1(n1), g2(n2);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--, v--;
        if(u < n1){
            g1[u].push_back(v);
            g1[v].push_back(u);
        }
        else{
            u -= n1;
            v -= n1;
            g2[u].push_back(v);
            g2[v].push_back(u);
        }
    }

    queue<int> que;

    vector<int> dist1(n1, -1), dist2(n2, -1);
    dist1[0] = 0, dist2[n2 - 1] = 0;

    que.push(0);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : g1[v]){
            if(dist1[nv] == -1){
                dist1[nv] = dist1[v] + 1;
                que.push(nv);
            }
        }
    }

    que.push(n2 - 1);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : g2[v]){
            if(dist2[nv] == -1){
                dist2[nv] = dist2[v] + 1;
                que.push(nv);
            }
        }
    }

    sort(dist1.begin(), dist1.end());
    sort(dist2.begin(), dist2.end());
    cout << dist1.back() + dist2.back() + 1 << endl;
    return 0;
}