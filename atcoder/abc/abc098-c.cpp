#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> cnt_w(n + 1, 0), cnt_e(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cnt_w[i] = cnt_w[i - 1];
        cnt_e[i] = cnt_e[i - 1];
        if(s[i - 1] == 'W') cnt_w[i]++;
        if(s[i - 1] == 'E') cnt_e[i]++;
    }

    int mi = n;
    for(int i = 1; i <= n; i++){
        mi = min(mi, cnt_w[i - 1] - cnt_w[0] + cnt_e[n] - cnt_e[i]);
    }
    cout << mi << endl;
    return 0;
}