#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    int n, m, k;
    cin >> n >> m;
    vector<pair<int, int>> ab(m);
    for(int i = 0; i < m; i++){
        cin >> ab[i].fi >> ab[i].se;
        ab[i].fi--, ab[i].se--;
    }
    cin >> k;
    vector<pair<int, int>> cd(k);
    for(int i = 0; i < k; i++){
        cin >> cd[i].fi >> cd[i].se;
        cd[i].fi--, cd[i].se--;
    }

    int ans = 0;
    for(int i = 0; i < (1 << k); i++){
        int num = 0;
        map<int, int> ball;
        
        for(int bit = 0; bit < k; bit++){
            if(i & (1 << bit)) ball[cd[bit].fi]++;
            else ball[cd[bit].se]++;
        }
        
        for(int j = 0; j < m; j++){
            if(ball[ab[j].fi] > 0 && ball[ab[j].se] > 0){
                num++;
            }
        }
        chmax(ans, num);
    }
    cout << ans << endl;
    return 0;
}