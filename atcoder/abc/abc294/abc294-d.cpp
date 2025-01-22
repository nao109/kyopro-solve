#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, q;
    cin >> n >> q;
    set<int> called, line, calledline;
    for(int i = 0; i < n; ++i){
        line.insert(i + 1);
    }
    vector<int> ans;
    for(int i = 0; i < q; ++i){
        int k;
        cin >> k;
        if(k == 1){
            called.insert(*line.begin());
            calledline.insert(*line.begin());
            line.erase(*line.begin());
        }
        if(k == 2){
            int x;
            cin >> x;
            called.erase(x);
            calledline.erase(x);
        }
        if(k == 3){
            ans.push_back(*called.begin());
        }
    }

    for(int i = 0; i < (int)ans.size(); ++i) cout << ans[i] << endl;
    return 0;
}