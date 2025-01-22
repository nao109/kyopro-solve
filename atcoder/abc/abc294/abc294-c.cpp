#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;
    map<int, int> numa, numb;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        numa[a[i]] = i;
        c.push_back(a[i]);
    }
    for(int i = 0; i < m; ++i){
        cin >> b[i];
        numb[b[i]] = i;
        c.push_back(b[i]);
    }
    sort(c.begin(), c.end());

    vector<int> ansa(n), ansb(m);
    for(int i = 0; i < n + m; ++i){
        if(numa.count(c[i])) ansa[numa[c[i]]] = i + 1;
        else ansb[numb[c[i]]] = i + 1;
    }

    for(int i = 0; i < n; ++i) cout << ansa[i] << " \n"[i == n - 1];
    for(int i = 0; i < m; ++i) cout << ansb[i] << " \n"[i == m - 1];
    return 0;
}