#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int q;
    cin >> q;
    set<int> s;
    for(int i = 0; i < q; i++){
        int t, x;
        cin >> t >> x;
        if(t == 1) s.insert(x);
        else if(t == 2) s.erase(x);
        else cout << (s.lower_bound(x) == s.end() ? -1 : *s.lower_bound(x)) << "\n";
    }
    return 0;
}
