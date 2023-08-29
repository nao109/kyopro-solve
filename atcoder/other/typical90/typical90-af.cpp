#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const int INF = 1e9;
int main(){
    int n;
    cin >> n;
    vector a(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    set<pair<int, int>> xy;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        xy.insert({x - 1, y - 1});
    }

    int ans = INF;
    vector<int> runner(n);
    for(int i = 0; i < n; i++) runner[i] = i;
    do{
        int sum = 0;
        for(int i = 0; i < n; i++) sum += a[runner[i]][i];

        for(int i = 1; i < n; i++){
            if(xy.count({runner[i - 1], runner[i]}) || xy.count({runner[i], runner[i - 1]})){
                sum = INF;
            }
        }

        ans = min(sum, ans);
    }while(next_permutation(runner.begin(), runner.end()));

    cout << (ans < INF ? ans : -1) << endl;
    return 0;
}