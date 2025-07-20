#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<pair<char, ll>> p(n);
    ll len = 0;
    for(int i = 0; i < n; i++){
        char c;
        ll l;
        cin >> c >> l;

        if(l > 100){
            cout << "Too Long\n";
            return 0;
        }
        if(len + l > 100){
            cout << "Too Long\n";
            return 0;
        }
        len += l;

        p[i] = make_pair(c, l);
    }

    string s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p[i].se; j++){
            s.push_back(p[i].fi);
        }
    }
    cout << s << "\n";
    return 0;
}
