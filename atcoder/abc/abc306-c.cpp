#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(3 * n);
    for(int i = 0; i < 3 * n; i++) cin >> a[i];

    map<int, int> f;
    map<int, int> cnt;
    for(int i = 0; i < 3 * n; i++){
        if(!cnt.count(a[i])) cnt[a[i]] = 1;
        else cnt[a[i]]++;

        if(cnt[a[i]] == 2) f[i] = a[i];
    }
    
    for(auto i : f) cout << i.se << " ";
    return 0;
}