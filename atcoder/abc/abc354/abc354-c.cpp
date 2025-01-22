#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<pair<P, int>> ac;
    for(int i = 0; i < n; i++){
        int a, c;
        cin >> a >> c;
        ac.emplace_back(make_pair(a, c), i + 1);
    }
    sort(ac.begin(), ac.end());

    vector<pair<P, int>> rest;
    rest.push_back(ac.front());
    for(int i = 1; i < n; i++){
        P x = rest.back().fi, y = ac[i].fi;
        while(!rest.empty() && x.fi < y.fi && x.se > y.se){
            rest.pop_back();
            x = rest.back().fi;
        }
        rest.push_back(ac[i]);
    }

    vector<int> ans;
    for(auto i : rest){
        ans.push_back(i.se);
    }
    sort(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for(int i = 0; i < (int)ans.size(); i++) cout << ans[i] << " \n"[i == (int)ans.size() - 1];
    return 0;
}
