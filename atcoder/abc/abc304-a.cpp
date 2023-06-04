#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<pair<string, int>> sa(n);
    int minid = 0;
    for(int i = 0; i < n; i++){
        cin >> sa[i].fi >> sa[i].se;
        if(sa[i].se < sa[minid].se) minid = i;
    }
    for(int i = 0; i < n; i++) cout << sa[(minid + i) % n].fi << endl;
    return 0;
}