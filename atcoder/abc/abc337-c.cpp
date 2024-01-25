#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].fi;
        a[i].se = i + 1;
    }
    sort(a.begin(), a.end());

    int cnt = 0;
    int id = 0;
    while(cnt <= n){
        cout << a[id].se << " \n"[cnt == n];
        cnt++;
    }
    return 0;
}