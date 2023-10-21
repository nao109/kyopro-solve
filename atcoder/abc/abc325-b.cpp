#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> wx(n);
    for(int i = 0; i < n; i++) cin >> wx[i].fi >> wx[i].se;
    sort(wx.begin(), wx.end());

    int max_n = 0;
    for(int i = 0; i < 48; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if(9 - wx[j].se <= i && i < 18 - wx[j].se) sum += wx[j].fi;
            else if(33 - wx[j].se <= i && i < 42 - wx[j].se) sum += wx[j].fi;
        }
        max_n = max(sum, max_n);
    }
    cout << max_n << endl;
    return 0;
}