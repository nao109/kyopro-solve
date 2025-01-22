#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    map<string, int> ac;
    for(int i = 0; i < n; ++i){
        string p, v;
        cin >> p >> v;
        if(v == "AC" && !ac.count(p)) ac[p] = i + 1;
    }
    for(auto [p, id] : ac) cout << id << endl;
    return 0;
}