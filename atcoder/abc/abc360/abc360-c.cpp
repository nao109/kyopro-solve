#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<int> a(n), w(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> w[i];

    vector<vector<int>> boxes(n);
    for(int i = 0; i < n; i++){
        boxes[a[i] - 1].push_back(w[i]);
    }
    for(int i = 0; i < n; i++){
        sort(boxes[i].begin(), boxes[i].end());
    }

    int cost = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (int)boxes[i].size() - 1; j++){
            cost += boxes[i][j];
        }
    }
    cout << cost << "\n";
    return 0;
}
