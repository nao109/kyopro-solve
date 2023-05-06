#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void solve(vector<string> &c, vector<int> &ans, int h, int w, int j, int k){
    vector<int> cnt(4, 0);

    while(c[j - cnt[0]][k - cnt[0]] == '#'){
        cnt[0]++;
        if(j - cnt[0] < 0 || k - cnt[0] < 0) break;
    }
    while(c[j - cnt[1]][k + cnt[1]] == '#'){
        cnt[1]++;
        if(j - cnt[1] < 0 || k + cnt[1] >= w) break;
    }
    while(c[j + cnt[2]][k - cnt[2]] == '#'){
        cnt[2]++;
        if(j + cnt[2] >= h || k - cnt[2] < 0) break;
    }
    while(c[j + cnt[3]][k + cnt[3]] == '#'){
        cnt[3]++;
        if(j + cnt[3] >= h || k + cnt[3] >= w) break;
    }

    sort(cnt.begin(), cnt.end());
    if(cnt[0] >= 2) ans[cnt[0] - 2]++;
}

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    for(int i = 0; i < h; ++i) cin >> c[i];

    int n = min(h, w);
    vector<int> ans(n);
    for(int j = 0; j < h; ++j){
        for(int k = 0; k < w; ++k){
            if(c[j][k] == '#') solve(c, ans, h, w, j, k);
        }
    }
    
    for(int i = 0; i < n; ++i) cout << ans[i] << " \n"[i == n - 1];
    return 0;
}