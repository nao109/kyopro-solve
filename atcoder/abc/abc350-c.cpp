#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    map<int, int> id;
    for(int i = 1; i <= n; i++){
        if(a[i] != i) id[a[i]] = i;
    }

    vector<pair<int, int>> ans;
    while(1){
        for(auto [i, j] : id){
            if(id[i] == i) continue;
            ans.push_back(minmax(id[j], id[i]));
            swap(id[i], id[j]);
            if(id[i] == i) id.erase(i);
            if(id[j] == j) id.erase(j);
            break;
        }

        if(id.empty()) break;
    }

    cout << ans.size() << "\n";
    for(auto [i, j] : ans) cout << i << " " << j << "\n";
    return 0;
}
