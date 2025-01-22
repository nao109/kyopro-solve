#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    set<pair<int, int>> pillar;
    for(int i = 0; i < n; i++) pillar.emplace(x[i], y[i]);
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;

            int dx = x[j] - x[i], dy = y[j] - y[i];
            if(pillar.count({x[i] + dy, y[i] - dx}) && pillar.count({x[j] + dy, y[j] - dx})){
                int dist_2 = dx * dx + dy * dy;
                chmax(ans, dist_2);
            }
            else if(pillar.count({x[i] - dy, y[i] + dx}) && pillar.count({x[j] - dy, y[j] + dx})){
                int dist_2 = dx * dx + dy * dy;
                chmax(ans, dist_2);
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
