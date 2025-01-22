#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];

    vector<deque<int>> dq(m + 1);
    for(int j = 0; j < n; j++){
        dq[c[j]].push_back(s[j]);
    }
    for(int i = 1; i <= m; i++){
        dq[i].push_front(dq[i].back());
        dq[i].pop_back();
    }
    for(int j = 0; j < n; j++){
        s[j] = dq[c[j]].front();
        dq[c[j]].pop_front();
    }
    cout << s << endl;
    return 0;
}