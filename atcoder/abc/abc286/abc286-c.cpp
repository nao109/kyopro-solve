#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(), a.end()
int main(){
    ll n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    ll mi=LLONG_MAX;
    for(ll i=0; i<n; ++i){
        ll ch=0;
        for(ll j=0; j<n/2; ++j){
            ch+=b*(s[j]!=s[n-1-j]);
        }
        mi=min(ch+a*i, mi);
        s=s.substr(1)+s[0];
    }
    cout << mi << endl;
    return 0;
}