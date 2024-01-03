#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
const int INF = 1e9;

int main(){
    int n;
    cin >> n;
    set<int> ng;
    for(int i = 0; i < 3; i++){
        int x;
        cin >> x;
        ng.insert(x);
    }

    vector<int> dp(n + 1, INF);
    dp[0] = 0;

    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j <= 3; j++){
            if(i >= j){
                if(dp[i - j] >= INF) continue;
                chmin(dp[i], dp[i - j] + 1);
            }
            if(ng.count(i)) dp[i] = INF;
        }
    }

    /*
    for(int i = 0; i < n + 1; i++){
        cerr << dp[i] << " \n"[i == n];
    }
    */
    cout << (dp[n] <= 100 ? "YES\n" : "NO\n");
    return 0;
}