#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(), a.end()

bool dp[5010][10010];
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> ab;
    for(int i = 0; i < n; ++i){
        int a, b;
        cin >> a >> b;
        for(int j = 0; j < b; ++j){
            ab.push_back(a);
        }
    }
    sort(all(ab));
    n=ab.size();

    dp[0][0] = true;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= x; ++j){
            dp[i+1][j] |= dp[i][j];
            if(j >= ab[i]) dp[i+1][j] |= dp[i][j-ab[i]];
        }
    }

    cout << (dp[n][x] ? "Yes\n" : "No\n");
    return 0;
}