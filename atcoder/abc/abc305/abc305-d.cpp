#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> sleep;
    sleep.push_back(0);
    for(int i = 0; i < n - 1; i++){
        if(i % 2 == 1) sleep.push_back(sleep.back() + a[i + 1] - a[i]);
        else sleep.push_back(sleep.back());
    }

    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        
        auto itrl = lower_bound(a.begin(), a.end(), l);
        auto itrr = lower_bound(a.begin(), a.end(), r);

        bool gobed_l = ((int)distance(a.begin(), itrl) % 2 == 1);
        bool getup_r = ((int)distance(a.begin(), itrr) % 2 == 0);

        int ans = 1e9;

        int dl = distance(a.begin(), itrl);
        int dr = distance(a.begin(), itrr);

        if(gobed_l){
            if(getup_r) ans = sleep[dr] - sleep[dl] - (*itrr - r);
            else ans = sleep[dr - 1] - sleep[dl];
        }
        else{
            if(getup_r) ans = sleep[dr] - sleep[dl] - (*itrr - r) - (l - *itrl);
            else ans = sleep[dr] - sleep[dl] - (l - *itrl);
        }
        cout << ans << endl;
    }
    return 0;
}