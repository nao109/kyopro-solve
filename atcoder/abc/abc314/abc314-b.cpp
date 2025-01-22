#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, x;
    cin >> n;
    vector<set<int>> a(n);
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        for(int j = 0; j < c; j++){
            int k;
            cin >> k;
            a[i].insert(k);
        }
    }
    cin >> x;

    vector<pair<int, int>> num_id;

    for(int i = 0; i < n; i++){
        if(a[i].count(x)){
            num_id.emplace_back((int)a[i].size(), i);
        }
    }
    sort(num_id.begin(), num_id.end());

    vector<int> ans;
    
    for(auto [num, id] : num_id){
        if(num == num_id[0].fi) ans.push_back(id + 1);
    }

    cout << ans.size() << endl;
    for(int i = 0; i < (int)ans.size(); i++) cout << ans[i] << " \n"[i == (int)ans.size() - 1];
    return 0;
}