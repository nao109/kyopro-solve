#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    map<string, int> cnt;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        if(cnt.count(s)) cnt[s]++;
        else cnt[s] = 1;
    }

    map<int, vector<string>> num;
    for(auto [s, i] : cnt){
        num[i].push_back(s);
    }

    vector<pair<int, int>> rev;
    for(auto [i, v] : num){
        rev.emplace_back(i, v.size());
    }
    sort(rev.begin(), rev.end());
    reverse(rev.begin(), rev.end());

    for(int i = 0; i < (int)rev.size(); ++i){
        k -= rev[i].se;
        if(rev[i].se == 1){
            if(k == 0){
                cout << num[rev[i].fi][0] << endl;
                return 0;
            }
        }
        else if(k <= 0){
            cout << "AMBIGUOUS\n";
            return 0;
        }
    }
    return 0;
}
