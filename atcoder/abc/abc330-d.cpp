#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<int> cnt_x(n), cnt_y(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i][j] == 'o'){
                cnt_x[j]++;
                cnt_y[i]++;
            }
        }
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i][j] == 'o') ans += (cnt_y[i] - 1) * (cnt_x[j] - 1);
        }
    }
    cout << ans << endl;
    return 0;
}