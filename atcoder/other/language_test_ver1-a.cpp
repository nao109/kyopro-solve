#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string c;
    cin >> n >> c;
    vector<int> cnt(4);
    for(int i = 0; i < n; ++i) cnt[c[i] - '1']++;
    sort(cnt.begin(), cnt.end());
    cout << cnt[3] << " " << cnt[0] << endl;
    return 0;
}