#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == '1') cnt++;
    }

    vector<int> ans(n, -1);
    set<int> used;
    for(int i = 0; i < n; ++i){
        if(s[i] == '1' && !used.count(i + 1)){
            ans[i] = i + 1;
            used.insert(i + 1);
        }
    }

    vector<int> unused;
    for(int i = 0; i < n; ++i){
        if(!used.count(i + 1)) unused.push_back(i + 1);
    }

    if((int)unused.size() < 2){
        cout << -1 << endl;
        return 0;
    }

    for(int i = 0; i < n; ++i){
        if(ans[i] == -1){
            ans[i] = *unused.rbegin();
            unused.pop_back();
        }
    }

    for(int i = 0; i < n; ++i) cout << ans[i] << " \n"[i == n - 1];
    return 0;
}