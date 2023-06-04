#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll INF = (ll)1e9;
int main(){
    ll w, h, n;
    cin >> w >> h >> n;
    vector<pair<ll, ll>> pq(n);
    for(int i = 0; i < n; i++) cin >> pq[i].fi >> pq[i].se;
    ll A, B;
    cin >> A;
    vector<ll> a(A);
    for(int i = 0; i < A; i++) cin >> a[i];
    cin >> B;
    vector<ll> b(B);
    for(int i = 0; i < B; i++) cin >> b[i];

    map<pair<ll, ll>, ll> cnt;
    for(int i = 0; i < n; i++){
        auto itrx = upper_bound(a.begin(), a.end(), pq[i].fi);
        auto itry = upper_bound(b.begin(), b.end(), pq[i].se);
        ll dx = (int)distance(a.begin(), itrx);
        ll dy = (int)distance(b.begin(), itry);
        if(cnt.count({dx, dy})) cnt[{dx, dy}]++;
        else cnt[{dx, dy}] = 1;
    }

    ll mi = n, ma = 0;
    for(auto i : cnt){
        ma = max(ma, i.se);
        mi = min(mi, i.se);
    }
    if((ll)cnt.size() < (A + 1) * (B + 1)) mi = 0;

    cout << mi << " " << ma << endl;
    return 0;
}