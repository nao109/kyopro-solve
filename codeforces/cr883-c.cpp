#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void solve(){
    ll n, m, h;
    cin >> n >> m >> h;
    vector<vector<ll>> t(n, vector<ll>(m));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> t[i][j];
        }
        sort(t[i].begin(), t[i].end());
    }

    vector<vector<ll>> time(n, vector<ll>(m));
    for(int i = 0; i < n; i++){
        time[i][0] = t[i][0];
        for(int j = 1; j < m; j++){
            time[i][j] = time[i][j - 1] + t[i][j];
        }
    }

    vector<pair<pair<ll, ll>, ll>> point(n, {{0, 0}, 0});
    vector<ll> time_solved(n, 0);
    for(ll i = 0; i < n; i++){
        point[i].se = i;
        
        for(ll j = 0; j < m; j++){
            if(time_solved[i] + t[i][j] <= h){
                time_solved[i] += t[i][j];
                point[i].fi.fi--;
                point[i].fi.se += time[i][j];
            }
        }
    }
    sort(point.begin(), point.end());

    for(ll i = 0; i < n; i++){
        if(point[i].se == 0) cout << i + 1 << endl;
    }
}

int main(){
    ll q;
    cin >> q;
    while(q--) solve();
    return 0;
}
