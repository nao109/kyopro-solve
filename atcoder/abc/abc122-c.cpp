#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, q;
    string s;
    cin >> n >> q >> s;

    vector<int> cnt(n + 1, 0);
    for(int i = 0; i < n; i++){
        cnt[i + 1] = cnt[i];
        if(s[i] == 'A' && s[i + 1] == 'C') cnt[i + 1]++;
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << cnt[r - 1] - cnt[l - 1] << endl;
    }
    return 0;
}