#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

const ll INF = 1e18;
int main(){
    // input
    ll h, w;
    cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w)), b(h, vector<ll>(w));
    for(ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            cin >> a[i][j];
        }
    }
    for(ll i = 0; i < h; i++){
        for(ll j = 0; j < w; j++){
            cin >> b[i][j];
        }
    }

    vector<ll> y(h), x(w);
    for(ll i = 0; i < h; i++) y[i] = i;
    for(ll j = 0; j < w; j++) x[j] = j;

    ll ans = INF;

    do{
        do{

            bool match = true;
            for(ll i = 0; i < h; i++){
                for(ll j = 0; j < w; j++){
                    if(a[y[i]][x[j]] != b[i][j]) match = false;
                }
            }
            if(!match) continue;

            ll yinv = 0, xinv = 0;
            for(ll i = 0; i < h; i++){
                for(ll j = i + 1; j < h; j++){
                    if(y[i] > y[j]) yinv++;
                }
            }
            for(ll i = 0; i < w; i++){
                for(ll j = i + 1; j < w; j++){
                    if(x[i] > x[j]) xinv++;
                }
            }
            chmin(ans, yinv + xinv);

        }while(next_permutation(x.begin(), x.end()));
    }while(next_permutation(y.begin(), y.end()));

    cout << (ans == INF ? -1 : ans) << endl;
    return 0;
}