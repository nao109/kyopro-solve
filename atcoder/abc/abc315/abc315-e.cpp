#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<vector<int>> p(n);
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        for(int j = 0; j < c; j++){
            int b;
            cin >> b;
            p[i].push_back(b - 1);
        }
    }

    vector<int> ans;

    vector<bool> read(n, false);
    queue<int> que;
    read[0] = true;
    que.push(0);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : p[v]){
            if(read[nv]) continue;

            read[nv] = true;
            ans.push_back(nv + 1);
            que.push(nv);
        }
    }

    reverse(ans.begin(), ans.end());
    for(int i = 0; i < (int)ans.size(); i++){
        cout << ans[i] << " \n"[i == (int)ans.size() - 1];
    }
    return 0;
}