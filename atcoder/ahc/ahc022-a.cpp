#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int l, n, s;
    cin >> l >> n >> s;
    vector<pair<int, int>> yx(n);
    for(int i = 0; i < n; i++) cin >> yx[i].fi >> yx[i].se;

    vector p(l, vector<int>(l, 0));
    vector<int> e(n);

    // 配置パート
    int temp = 1000 / n;
    if(s <= 10) temp = sqrt(s) + 1;
    for(int i = 0; i < n; i++){
        p[yx[i].fi][yx[i].se] = temp * (i + 1);
    }
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            cout << p[i][j] << " \n"[j == l - 1] << flush;
        }
    }

    // 計測パート
    int m_cnt = min(100, 10000 / n);
    vector<pair<double, int>> res(n);
    for(int i = 0; i < n; i++){
        int y = 0, x = 0;
        double m_ave = 0;
        for(int j = 0; j < m_cnt; j++){
            cout << i << " " << y << " " << x << "\n" << flush;
            int m;
            cin >> m;
            if(m == -1) return -1;
            m_ave += m;
        }
        res[i].fi += m_ave / m_cnt;
        res[i].se = i;
    }

    sort(res.begin(), res.end());
    for(int i = 0; i < n; i++) e[res[i].se] = i;

    // 出力パート
    cout << -1 << " " << -1 << " " << -1 << "\n" << flush;
    for(int i = 0; i < n; i++) cout << e[i] << "\n" << flush;
    return 0;
}