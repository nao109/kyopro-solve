#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n, t;
    cin >> n >> t;
    vector<ll> a(t), b(t);
    for(int i = 0; i < t; i++) cin >> a[i] >> b[i];
    
    map<ll, ll> cnt;
    cnt[0] = n;
    map<ll, ll> score;
    for(int i = 0; i < t; i++) score[a[i]] = 0;

    for(int i = 0; i < t; i++){
        if(cnt[score[a[i]]] == 1) cnt.erase(score[a[i]]);
        else cnt[score[a[i]]]--;

        score[a[i]] += b[i];

        cnt[score[a[i]]]++;

        cout << cnt.size() << "\n";
    }
    return 0;
}