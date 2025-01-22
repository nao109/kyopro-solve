#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> cnt;
    for(int i = 0; i < n; i++) cnt[a[i]]++;

    vector<pair<ll, ll>> count;
    count.assign(cnt.begin(), cnt.end());

    map<ll, ll> sum;
    sum[count[0].fi] = count[0].se;
    for(int i = 1; i < (int)count.size(); i++){
        sum[count[i].fi] = sum[count[i - 1].fi] + count[i].fi * count[i].se;
    }

    // for(int i = 0; i < (int)count.size(); i++) cout << sum[count[i].fi] << endl;
    
    ll s = sum[*max_element(a.begin(), a.end())];
    for(int i = 0; i < n; i++){
        cout << s - sum[a[i]] << " \n"[i == n - 1];
    }
    return 0;
}