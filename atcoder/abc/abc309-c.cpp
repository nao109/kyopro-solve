#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> ab(n);
    for(int i = 0; i < n; i++) cin >> ab[i].fi >> ab[i].se;
    sort(ab.begin(), ab.end());

    set<int> day;
    for(auto [a, b] : ab) day.insert(a);

    ll cnt = 0;
    for(int i = 0; i < n; i++) cnt += ab[i].se;
    
    int ans = 1;
    for(int i = 0; i < n;){
        if(cnt <= k) break;

        if(!day.count(ans)){
            ans = ab[i].fi;
        }
        else{
            cnt -= ab[i].se;
            ans++;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}