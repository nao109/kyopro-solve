#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    vector<set<int>> g(n), h(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].insert(b);
        g[b].insert(a);
    }
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        h[a].insert(b);
        h[b].insert(a);
    }

    vector<int> p(n);
    for(int i = 0; i < n; i++) p[i] = i;

    do {
        bool flag = true;
        for(int i = 0; i < n; i++){
            int ni = p[i];
            if(h[ni].size() != g[i].size()){
                flag = false;
                break;
            }

            for(int j : g[i]){
                int nj = p[j];
                if(!h[ni].count(nj)){
                    flag = false;
                    break;
                }
            }
        }

        if(flag){
            cout << "Yes\n";
            return 0;
        }
    } while(next_permutation(p.begin(), p.end()));
    cout << "No\n";
    return 0;
}
