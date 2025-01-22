#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    set<int> a;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.insert(x);
    }
    vector<int> ab;
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        if(a.count(x)) b.push_back(x);
    }
    sort(ab.begin(), ab.end());

    for(int i = 0; i < (int)ab.size(); ++i){
        cout << ab[i] << " \n"[i == (int)ab.size() - 1];
    }
    return 0;
}