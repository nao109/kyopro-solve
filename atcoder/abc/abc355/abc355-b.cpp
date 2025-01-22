#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    set<int> a, b;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        b.insert(x);
    }

    vector<int> c;
    for(int i : a) c.push_back(i);
    for(int i : b) c.push_back(i);
    sort(c.begin(), c.end());

    for(int i = 0; i < n + m - 1; i++){
        if(a.count(c[i]) && a.count(c[i + 1])){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
