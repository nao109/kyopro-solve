#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> b;
    map<int, int> num;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        b.insert(a[i]);
    }
    
    int cnt = 1;
    for(int i : b) num[i] = cnt++;

    for(int i = 0; i < n; ++i) cout << num[a[i]] << " \n"[i == n - 1];
    return 0;
}