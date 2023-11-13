#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, q;
    string s;
    cin >> n >> q >> s;

    vector<int> sum(n + 1, 0);
    for(int i = 1; i <= n; i++){
        if(s[i - 1] == s[i]) sum[i]++;
        sum[i] += sum[i - 1];
    }
    
    while(q--){
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << sum[r] - sum[l] << endl;
    }
    return 0;
}