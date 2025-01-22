#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, k;
    cin >> n >> k;
    vector t(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> t[i][j];
        }
    }

    vector<int> route(n - 1);
    for(int i = 1; i < n; i++) route[i - 1] = i;

    int ans = 0;
    do{
        int dist = 0;
        dist += t[0][route[0]] + t[route[n - 2]][0];
        for(int i = 1; i < n - 1; i++) dist += t[route[i - 1]][route[i]];
        if(dist == k) ans++;
    }while(next_permutation(route.begin(), route.end()));
    cout << ans << "\n";
    return 0;
}