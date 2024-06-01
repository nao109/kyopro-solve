#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];
    vector<vector<int>> x(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x[i][j];
        }
    }

    vector<int> get(m, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            get[j] += x[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        if(get[i] < a[i]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
