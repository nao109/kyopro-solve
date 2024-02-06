#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }
const int INF = 1e9;

int main(){
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    for(int i = 0; i < n; i++) cin >> q[i];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int diva = INF;
    for(int i = 0; i < n; i++){
        if(a[i] > 0) chmin(diva, q[i] / a[i]);
    }

    int ans = 0;
    for(int i = 0; i <= diva; i++){
        int divb = INF;
        vector<int> qq(n);
        for(int j = 0; j < n; j++){
            qq[j] = q[j] - a[j] * i;
        }
        for(int j = 0; j < n; j++){
            if(b[j] > 0) chmin(divb, qq[j] / b[j]);
        }
        chmax(ans, i + divb);
    }
    cout << ans << endl;
    return 0;
}